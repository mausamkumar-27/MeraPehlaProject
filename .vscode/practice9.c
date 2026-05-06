#include <stdio.h>
int main() {
    int a=10;
    float b=12.56;
    float sum = a+b;
    float difference = b-a;
    float product = a*b;
    float quotient = b/a;
    printf("The sum of a and b is %.2f\n", sum);
    printf("The difference of b and a is %.2f\n", difference);
    printf("The product of a and b is %.2f\n", product);
    printf("The quotient of b and a is %.2f\n", quotient);


    return 0;
}