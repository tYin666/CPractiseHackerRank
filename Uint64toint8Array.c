#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    long long number = 0xFFFFFFFFFFFFFFFFF;
    uint8 *p = (uint8_t *)&number;
    //if you need a copy
    uint8 result[8];
    for(int i = 0; i < 8; i++) {
        result[i] = p[i];
        printf("%d ", result[i]);
        printf("\n");
    }
    return 0;
}