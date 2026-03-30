#include <stdio.h>
int main(){
    int seats[3][4];
    for(int i=0; i<3; i++){
        printf("Enter seat numbers for row %d\n: ", i+1);
        for(int j=0; j<4; j++){
            scanf("%d", &seats[i][j]);
        }
        printf("\n");
    }
    return 0;
}