#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    long long number = 1234605616436508552;
    //if you need a copy
    int byteArray[8];
    byteArray[0] = (int)((number & 0xFF00000000000000) >> 56 );
    byteArray[1] = (int)((number & 0x00FF000000000000) >> 48 );
    byteArray[2] = (int)((number & 0x0000FF0000000000) >> 40 );
    byteArray[3] = (int)((number & 0x000000FF00000000) >> 32 );
    byteArray[4] = (int)((number & 0X00000000FF000000) >> 24);
    byteArray[5] = (int)((number & 0x0000000000FF0000) >> 16 );
    byteArray[6] = (int)((number & 0x000000000000FF00) >> 8 );
    byteArray[7] = (int)((number & 0X00000000000000FF));
    
    printf("CHAR[0] 0x%02X\n",byteArray[0]);
    printf("CHAR[1] 0x%02X\n",byteArray[1]);
    printf("CHAR[2] 0x%02X\n",byteArray[2]);
    printf("CHAR[3] 0x%02X\n",byteArray[3]);
    printf("CHAR[4] 0x%02X\n",byteArray[4]);
    printf("CHAR[5] 0x%02X\n",byteArray[5]);
    printf("CHAR[6] 0x%02X\n",byteArray[6]);
    printf("CHAR[7] 0x%02X\n",byteArray[7]);
}