#include <stdio.h>
#include <stdlib.h>
int main() 
{ 
   int *ptrr=(int *)malloc(sizeof(int));  
   *ptrr=80; 
   free(ptrr);
   ptrr = NULL; 
   printf("%d\n",*ptrr);
   //ptrr = NULL;
   return 0; 
}