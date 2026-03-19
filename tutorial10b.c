#include <stdio.h>
int main(){
    int age;
    printf("Enter your age\n ");
    scanf("%d", &age);
    printf("You have entered %d as your age\n", age);
    if ( age >= 18){
        printf("You are eligible to vote\n");
    }
    else {
        printf("You are not eligible to vote\n");
    }
    return 0;
}