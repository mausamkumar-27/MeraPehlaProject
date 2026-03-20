#include <stdio.h>

int main() {
    int Hardik;
    printf("Enter your total marks out of 500:\n");
    scanf("%d", &Hardik);
    if (Hardik >= 450) {
        printf("A grade\n");
    } else if (Hardik >= 400) {
        printf("B grade\n");
    } else if (Hardik >= 350) {
        printf("C grade\n");
    }
 else if (Hardik>=300){
    printf("D grade\n");
 } else if (Hardik<=165){
    printf("Fail\n");
 }
    return 0;
 }