#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

void chaskey(uint8_t *tag, uint32_t taglen, const uint8_t *m, const uint32_t mlen, const uint32_t k[4], const uint32_t k1[4], const uint32_t k2[4]);
void subkeys(uint32_t k1[4], uint32_t k2[4], const uint32_t k[4]);



