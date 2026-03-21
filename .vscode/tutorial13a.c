#include <stdio.h>
int main() {
    int num, index = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    do {
        printf("%d\n", index + 1);
        index = index + 1;
    } while (num<index&&index<num +3);

    return 0;
}