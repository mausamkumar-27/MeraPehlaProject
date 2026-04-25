#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 10;
    int *ptr; // ye wild pointer hai
    ptr = &a; // ptr is no longer a wild pointer
   // *ptr = 34;  // This is not a good thing to do
    printf("The value of a is %d\n", *ptr);
    return 0;
}