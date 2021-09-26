#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

// video 44: Point to a value and point to a address 
// ArrayName save the address of first element
int main()
{
    int i;
    int meatBalls[5]  = {7,9,43,21,3};

    printf("Elments \t Address\t\t Value \n");

    for(i=0; i<5; i++){
        printf("metallBalls[%d] \t %p \t %d \n", i , &meatBalls[i],meatBalls[i]);
    }

    // ArrayName save the address of first element
    printf("\nmeatballs \t %p\n", meatBalls);

    //dereference it, goes to the first element and get the value 
    printf("\n*(meatballs) \t %d\n", *meatBalls);

    //dereference it, goes to the third element and get the value 
    printf("\n*(meatballs+2) \t %d\n", *(meatBalls+2));

    return 0;
}