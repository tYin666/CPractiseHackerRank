#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include "BuckysInfo.h"

// video 44: Point to a value and point to a address 
// ArrayName save the address of first element
int main()
{
   struct user bucky;
   struct user emily; 
   
   bucky.userID = 10;
   emily.userID = 2; 

   puts("Enter the first name of user 1");
   gets(bucky.firstName);
   puts("Enter the first name of user 2");
   gets(emily.firstName);

   printf("User 1 id is %d\n",  bucky.userID);
   printf("User 2 firstname is %s\n",  emily.firstName);

   return 0;
}