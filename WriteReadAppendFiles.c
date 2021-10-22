#include <stdio.h>
#include <stdlib.h>

// video 44: Point to a value and point to a address 
// ArrayName save the address of first element
int main()
{
   // Write a file 
   //FILE * fPointer;
   //fPointer = fopen("bacon.txt", "w");
   //fprintf(fPointer, "i love cheese\n");
   //fprintf(fPointer, "Bacon is good\n");

  // read file 
   /* fPointer = fopen("bacon.txt", "r");
   char singleLine[150];

   while(!feof(fPointer)){
       fgets(singleLine, 150, fPointer);
   }
   fclose(fPointer); */
  
   // append a file

   FILE * fPointer; 
   fPointer = fopen("bacon.txt","a");

   fprintf(fPointer, "\n- a hikewl by Bucky Rboerts");

   fclose(fPointer);
   return 0; 
}