#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

// video 44: Point to a value and point to a address 
// ArrayName save the address of first element
int main()
{
   char movie1[] = "The Return of Buckyman!";
   char * movie2 = "Bucky is awesome i love ham!";

   puts(movie2);

   movie2 = "New movie title: ";

   puts(movie2);

   printf("%s", movie2);



    return 0;
}