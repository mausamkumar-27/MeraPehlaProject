#include <stdio.h>

int main() {
    int Mausam;
    printf("kya barish ho rahi hai?\n");
    scanf("%d", &Mausam);
    if(Mausam == 1){
        printf("chhata leke jao\n");
        scanf("%d", &Mausam);

    } else if(Mausam == 0){
            printf("Normal jao\n");
            scanf("%d", &Mausam);
    }else {
        printf("bhai sirf 0 ya 1 daalo!\n");
    }
            return 0;
        }