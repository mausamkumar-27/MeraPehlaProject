#include <stdio.h>
int main() {
    int age; float height; char name;
    printf("Enter your age\n");
    scanf("%d", &age);
    printf("Your age is %d\n", age);
    printf("Enter your height\n");
    scanf("%f", &height);
    printf("Your height is %f\n", height);
    printf("Enter first letter of your name\n");
    scanf(" %c", &name);  //%c se pehle space dena zaruri hai, warna ye line 10 (newline character) ko read kr lega & name variable me store kr lega
    printf("The first letter of your name is %c\n", name);
    return 0;
}