#include <stdio.h>
int main(){
    int a=19; 
    const float b=3.14;
    b=2.17; // This will cause a compilation error because b is declared as a constant
    printf("The value of a is %d\n", a);
    printf("The value of b is %.2f\n", b);
    return 0;
}