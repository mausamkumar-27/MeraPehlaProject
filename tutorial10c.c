#include <stdio.h>
int main(){
    int age;
    printf("Enter your age\n ");
    scanf("%d", &age);
    printf("You have entered %d as your age\n", age);
    if ( age >= 18){
        printf("You are eligible to vote\n");
    }
    else if (
        age >= 10){
        printf("You are between 10 and 17 and you can vote to kids\n");

    }
    else {
        printf("you cannot vote\n");
    }
    return 0;
}
