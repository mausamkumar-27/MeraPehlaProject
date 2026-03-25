#include <stdio.h>
char main(){
    char A,B,C,D;
    printf("kya aapko cancer hai?\n");
    scanf("%c", &A);
    scanf("%c", &B);
    scanf("%c", &C);
    scanf("%c", &D);
    switch (A) {
        case 1:
        printf("A ko fever hai\n");
        break;
        case 2:
        printf("B ko headache hai\n");
        break;
        case 3:
        printf("C ko body pain hai\n");
        break;
        case 4:
        printf("D ko cough hai\n");
        break;
        default:
        printf("koi bimari nahi hai\n");
    }
    return 0;
}
