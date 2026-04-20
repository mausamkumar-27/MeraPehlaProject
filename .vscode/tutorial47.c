#include <stdio.h>
#include <stdlib.h>
int main() {
    int *ptr;
    ptr = (int *)malloc(3*sizeof(int));
    for(int i=0; i<3; i++) {
        printf("Enter the value of an array:\n", i);
        scanf("%d", &ptr[i]);
    }
    for(int i=0; i<3; i++) {   // i<5 kroge to garbage value bhi print hogi
        printf("The value of an array is: %d\n", ptr[i]);
    }
    return 0;
}