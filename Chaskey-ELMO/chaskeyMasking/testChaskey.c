#define NOTRACES 2000
#define RAND_MAX 0xffffffff
//#define AUTON //Automaticially decide the number of traces N
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "chaskeyMasking.h"
#include "../../elmoasmfunctionsdef.h"

int main(void) {
    
    int i,j;
    int N = 100;
    uint32_t *input, *output, *key;
    
    key = malloc(4*sizeof(uint32_t));
    input = malloc(16*sizeof(uint32_t));
    output = malloc(4*sizeof(uint32_t));

/*
    #ifdef AUTON
     LoadNForTVLA(&N);//Get N from ELMO
    #else
     N=NOTRACES;
    #endif
    */
     
    // Use fixed key and fixed input as specified by CRI for use with AES
/*
    static const uint8_t fixedkey[16] = {0x01, 0x23, 0x45, 0x67, 0x89, 0xab, 0xcd, 0xef, 0x12, 0x34, 0x56, 0x78, 0x9a, 0xbc, 0xde, 0xf0};

    static const uint8_t fixedinput[16] = {0xda, 0x39, 0xa3, 0xee, 0x5e, 0x6b, 0x4b, 0x0d, 0x32, 0x55, 0xbf, 0xef, 0x95, 0x60, 0x18, 0x90};
    */

	static const uint32_t fixedkey[4] = {0x33221100,0x77665544,0xbbaa9988,0xffeeddcc};
	static const uint8_t fixedinput[16] = {0xda, 0x39, 0xa3, 0xee, 0x5e, 0x6b, 0x4b, 0x0d, 0x32, 0x55, 0xbf, 0xef, 0x95, 0x60, 0x18, 0x90};

    for(i=0;i<4;i++){
    
 	key[i] = fixedkey[i];
 	
	}

    for(j=0;j<16;j++){
    
 	input[j] = fixedinput[j];
 	
	}
	
    for(i=0;i<N;i++){
        
	//Switch from Fix to Random (Only do it once)

        if(i==N/2){
        	for(j=0;j<16;j++){
			input[j] = j;
			//readbyte(&input[j]);
		}
	}
             
        starttrigger();
        chaskey(key, input, output);
        endtrigger();

    }
           
    //endprogram();
    return 0;
}

