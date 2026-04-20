# include <stdio.h>
#include <stdlib.h>
int main() {
    int *ptr;
    ptr = (int *)calloc(3, sizeof(int));
    for(int i=0; i<3; i++) {
        printf("Enter the value of an array:\n", i);
       // scanf("%d", &ptr[i]);   ab initialized to 0 hogi
       scanf("%d", &ptr[i]);
    }
    for(int i=0; i<3; i++) {  //
        printf("The value of an array is: %d\n",ptr[i]);
    }
    return 0;
}