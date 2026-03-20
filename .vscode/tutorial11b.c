#include <stdio.h>
int main() {
    int age;
    printf("Enter your age:\n");
    scanf("%d", &age);
    switch (age) {
        case 18:
            printf("You are 18 years old.\n");
            break;
        case 25:
            printf("You are 25 years old.\n");
            break;
        default:
            printf("You are not 18 or 25 years old.\n");

    }
    return 0;

}