#include <stdio.h>
int main(){
    int ram;
    printf("kya school jaaoge? (1 for yes, 0 for no): ");
    scanf("%d", &ram);
    if (ram == 1) {
        printf("chalo school chalte hain!\n");
    }
    else if (ram == 0) {
        printf("self study kro!\n");
    }
    return 0;
}