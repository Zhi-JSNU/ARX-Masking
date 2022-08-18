/* Copyright 2020 University of Adelaide
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *    http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#define NTRACES /*@NTRACES{*/ 2000 /*}*/
#define TEST_TRACES (NTRACES/2)

#include <stdio.h>
#include <stdlib.h>
#include "../elmoasmfunctionsdef.h"
#include "chaskey.h"
#include "chaskeyMasking.h"
#include <stdint.h>

#define ALIGN __attribute__ ((aligned (4)))
/*
 * 4 byte align arrays to make sure we don't load invalid data
 * for state of byte-wise operations (ARM loads/stores 4 bytes
 * from addr & ~(0b11) when load/storing from address addr).
 * In ARM, Addresses that are not divisable by 4 are invalid when used
 * with wordwise instructions (ldr, str)
 */ 

/* 
 * Clear stack using a volatile buffer so that at each run the stack
 * is the same otherwise content from the previous run ends up leaking
 * this can be also mitigated by running each test on a coin flip (this 
 * is the way how that the real world counterpart of this test is being run).
 * However, as this is a simulated run -- we know what state related effects
 * change affect the T-test values therefore we clear all state related 
 * interactions.
 */

#define KEY_SZ 4
#define OUT_SZ 4
#define IN_SZ 16

volatile uint8_t input_copy[16] ALIGN;
volatile uint8_t input[IN_SZ] ALIGN;
volatile uint8_t output[OUT_SZ] ALIGN;
volatile uint8_t randombuf[16] ALIGN;
volatile uint32_t key[KEY_SZ] ALIGN;
volatile uint8_t throwaway[16] ALIGN;
volatile uint8_t rk[11*16] ALIGN;
volatile int domask=1;


void stack_clear()
{
    volatile uint8_t arr[1024];
    int i=0;
    for (i=0;i<1024;i++)
    {
        arr[i] = 0;
    }
}


void run_byte_chaskey_masked(volatile uint32_t* keybuf, volatile uint8_t* inputbuf){

    int i,j;
    unsigned char testthrowaway;
    
    for(j=0;j<16;j++)
    {
        output[j] = inputbuf[j];
        key[j] = keybuf[j];
    }

    readrandombyte(&testthrowaway);
    readrandombyte(&testthrowaway);
    readrandombyte(&testthrowaway);
    readrandombyte(&testthrowaway);
    readrandombyte(&testthrowaway);
    readrandombyte(&testthrowaway);
	
    chaskeyMask(keybuf, inputbuf);

#ifdef __arm__ 
    // clear stack and clear all other registers (leaving out r7)
    // to remove any state held from previous runs
    asm volatile (

        "bl stack_clear\n"
        "push {r0-r7}\n"
        "movs r0, %[value]\n" 
        "mov r6, #0\n"
        "mov r5, #0\n"
        "mov r4, #0\n"
        "mov r3, #0\n"
        "mov r2, #0\n"
        "mov r1, #0\n"
        "bl chaskeyMask\n"
        "pop {r0-r7}\n"
        :
        : [value] "r" (output));
#else
    stack_clear();
    chaskeyMask(keybuf, inputbuf);
#endif
/*    
    for(j=0;j<16;j++)
    {
        printbyte(&output[j]);
    }
    */

}
/*
#define RUN_FUNC(...) \
    run_byte_chaskey_masked(__VA_ARGS__)
*/
    uint32_t fixedkey[4] = {0x33221100,0x77665544,0xbbaa9988,0xffeeddcc};
    uint8_t fixedinput[16] = {0xda, 0x39, 0xa3, 0xee, 0x5e, 0x6b, 0x4b, 0x0d, 0x32, 0x55, 0xbf, 0xef, 0x95, 0x60, 0x18, 0x90};
	

void simple_init()
{
    int j=0;
    for(;j<16;j++)
    {
    }
}

void simple_run()
{
    int i,j;

    for(i=0;i<NTRACES;i++)
    {
             
        for (j=0;j<KEY_SZ;j++)
        {  
            key[j] = fixedkey[j];
        }
        
        for (j = 0; j < 16; j++){

    	    input[j] = fixedinput[j];
        }

        if(i==NTRACES/2){
        	for(j=0;j<IN_SZ;j++){
			readrandombyte(&input[j]);
		}
	}
	
        //run_byte_chaskey_masked(key, input);
        uint32_t output[4];
        chaskey(key, input, output);
        
    }
    endprogram();

}

