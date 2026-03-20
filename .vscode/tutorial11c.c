#include <stdio.h>
int main() {
    int marks;
    printf("Enter your marks:\n");
    scanf("%d", &marks);
    switch (marks) {
        case  300 ... 500:
            printf("you got 1st division.\n");
            break;
            case 225 ... 299:
            printf("you got 2nd division.\n");
            break;
            case 166 ... 224:
            printf("you got 3rd division.\n");
            break;
            case 0 ... 165:
            printf("you got fail.\n");
            break;
            default:
            printf("invalid marks.\n");
    }
    return 0;
}