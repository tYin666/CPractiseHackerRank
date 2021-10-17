#include <stdio.h>
#include <stdlib.h>

// video 44: Point to a value and point to a address 
// ArrayName save the address of first element
int main()
{
   FILE * fPointer;
   fPointer = fopen("bacon.txt", "w");
   fprintf(fPointer, "i love cheese\n");
   fclose(fPointer);

   return 0;
}