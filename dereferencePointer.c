#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

// video 42: deference: Goto the variable and get a value of a pointer

int main()
{
    int tuna = 19;
    int * pTuna = &tuna;

    printf("Address \t\t Name\t Value \n");
    printf("%p \t %s \t %d \n", pTuna, "tuna", tuna);
    printf("%p \t %s \t %p \n", &pTuna, "pTuna", pTuna);

    printf("\n *pTuna: %d \n", *pTuna);

    *pTuna = 71;

    printf("\n*pTuna: %d \n", *pTuna);
    printf("\n tuna %d\n", tuna);
    
    
    return 0;
}