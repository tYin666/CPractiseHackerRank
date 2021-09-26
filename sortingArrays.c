#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

//Bubulle Sort Video: 41

int main()
{   
     int i, temp, swapped;
     int totalNumbers = 10;
     int goals[totalNumbers];

     for(i=0; i < totalNumbers; i++){
         goals[i] = (rand() % 25) +1;
     } 
    printf("Orginal List\n");
    for(i= 0; i < totalNumbers; i++){
        printf("%d \n", goals[i]);
    }
    
    while(1){
        swapped = 0;
        for(i=0; i < totalNumbers-1; i++){
          if(goals[i]>goals[i+1]){
              int temp = goals[i];
              goals[i] = goals[i+1];
              goals[i+1] = temp; 
              swapped = 1;           }
         }
         if (swapped == 0){
             break;
         }
     } 
  
    printf("the sorted List\n");
    for (i= 0; i < totalNumbers; i++){
        printf("%d \n", goals[i]);
    }
    return 0;
}