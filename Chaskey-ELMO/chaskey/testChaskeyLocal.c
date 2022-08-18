#define NOTRACES 2000
#define RAND_MAX 0xffffffff
#define DEBUG 1
//#define AUTON //Automaticially decide the number of traces N
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "chaskey.h"
#include "../../elmoasmfunctionsdef.h"

int
main (void)
{
    int i, j;
    int N = 500;
    uint8_t *m, *tag, *k;
    
    k = malloc (16 * sizeof (uint8_t));
    tag = malloc (8 * sizeof (uint8_t));
    m = malloc (64 * sizeof (uint8_t));
    
    uint8_t key[16] ={
        0x00, 0x11, 0x22, 0x33,
        0x44, 0x55, 0x66, 0x77,
        0x88, 0x99, 0xaa, 0xbb,
        0xcc, 0xdd, 0xee, 0xff
    };

    uint32_t k1[4], k2[4];
    int a;
    uint32_t taglen = 8;
    
    for (i = 0; i < 16; i++){
    	k[i] = key[i];
    }

    subkeys (k1, k2, (uint32_t *) k);

    /*
        #ifdef AUTON
         LoadNForTVLA(&N);//Get N from ELMO
        #else
         N=NOTRACES;
        #endif
        */
    /*
       static const uint8_t fixedkey[16] = {0x01, 0x23, 0x45, 0x67, 0x89, 0xab, 0xcd, 0xef, 0x12, 0x34, 0x56, 0x78, 0x9a, 0xbc, 0xde, 0xf0};

       static const uint8_t fixedinput[16] = {0xda, 0x39, 0xa3, 0xee, 0x5e, 0x6b, 0x4b, 0x0d, 0x32, 0x55, 0xbf, 0xef, 0x95, 0x60, 0x18, 0x90};
     */
    
    /*
    for (j = 0; j < 16; j++){
    	input[j] = fixedinput[j];
    }*/

    for (i = 0; i < N; i++)
    {
        //Switch from Fix to Random (Only do it once)
        /*
                if(i==N/2){
                	for(j=0;j<16;j++){
        			//input[j] = fixedinput[j];
        			//input[j] = rand();
        			randbyte(&input[j]);
        		}
        	}
        */
        //starttrigger ();

        for (a = 0; a < 64; a++)
        {
            
            #if DEBUG
  		printf("K0 %08x %08x %08x %08x\n", k[0], k[1], k[2], k[3]);
  		printf("K1 %08x %08x %08x %08x\n", k1[0], k1[1], k1[2], k1[3]);
  		printf("K2 %08x %08x %08x %08x\n", k2[0], k2[1], k2[2], k2[3]);  
	    #endif
	        m[a] = a;
                chaskey(tag, taglen, m, i, (uint32_t *) k, k1, k2);
                //chaskey(tag, taglen, m, i, k, k1, k2);

        }
        //endtrigger ();

}

//endprogram ();
return 0;

}



