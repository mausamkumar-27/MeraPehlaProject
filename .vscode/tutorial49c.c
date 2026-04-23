#include <stdio.h>
int main() {
    int i = 0;
    for (i = 0; i < 5; i++) {
        printf("Value of i: %d\n", i);
    }
    printf("Address of i:%p", &i);
    return 0;
}