#include <stdio.h>
#include <stdlib.h>
int main() {
    int *ptr;
    ptr = (int *)malloc(3*sizeof(int));
    for(int i=0; i<3; i++) {
        printf("Enter the value of an array:\n", i);
       // scanf("%d", &ptr[i]);  ab initialised to garbage value hogi chahe 0ho ya koi random value
       scanf("%d", &ptr[i]);
    }
    for(int i=0; i<3; i++) {  
        printf("The value of an array is: %d\n", ptr[i]);
    }
    return 0;
}