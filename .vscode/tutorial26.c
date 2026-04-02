#include <stdio.h>
int main() {
    printf("lets learn about pointer\n");
    int a=76;
    int*ptra=&a;
    printf("the address of pointer to a is %p\n",&ptra); // &ptra ka mtlb ptra ka address
    printf("the address of a is %p\n",&a); // &a ka mtlb a ka address
    printf("the address of a is %p\n",ptra); //ptra ka mtlb a ki address
    printf("the value of a is %d\n",*ptra); // a ki value dega
    printf("the value of a is %d\n",a);
    return 0;
}