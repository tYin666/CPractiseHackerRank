#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

int n;
int res=0;
scanf("%d",&n);
int *arr = (int*)malloc(n * sizeof(int));
for(int i=0;i<n;i++)
{
    scanf("%d",& arr[i]);
}
 for(int i=0;i<n;i++)
{
    res=res + arr[i];
}
printf("%d",res);
free(arr);
/* Enter your code here. Read input from STDIN. Print output to STDOUT */    
return 0;   
   
}