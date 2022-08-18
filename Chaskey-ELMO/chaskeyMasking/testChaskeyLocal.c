#define NOTRACES 50
//#define AUTON //Automaticially decide the number of traces N
#include <stdio.h>
#include <stdlib.h>

#include "chaskey.h"
//#include "aes.h"
//#include "../../elmoasmfunctionsdef.h"
//#include "elmoasmfunctionsdef.h"

int main(void) {
    
    int i,j;
    int N;
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
	static const uint32_t fixedinput[16] = { 123456,234567,0x0b0a0908,0x0f0e0d0c,0x13121110,0x17161514,0x1b1a1918,0x1f1e1d1c,0x03020100,0x07060504,0x0b0a0908,0x0f0e0d0c,0x13121110,0x17161514,0x1b1a1918,0x1f1e1d1c,};

    N=50;
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
			input[j] = fixedinput[j];
		}
	}

	/*
        for(j=0;j<4;j++){
            if(i<N/2){
		input[j] = fixedinput[j]; // Fixed Traces
	    }
	    else{
		//input[j] = output[j]; 
		//input[j] = randbyte(&plaintext[j]);// Random Traces
		randbyte(input[j]);
	    }
            
            key[j] = fixedkey[j];
        }
        */
              
        //starttrigger();
       
             chaskey(key, input, output);
        
        //endtrigger();

    }
           
    //endprogram();
    return 0;
}
    
