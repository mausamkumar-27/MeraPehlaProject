#include <stdio.h>
int main(){
    int reportcard[2][3];
    for(int i=0; i<2; i++){
        printf("Enter marks for student %d:\n", i+1);
        for(int j=0; j<3; j++){
            scanf("%d", &reportcard[i][j]);
        }
        printf("\n");
    }
    printf("---Class Report Card---\n");
    printf("Student\tSubject 1\tSubject 2\tSubject 3\n");
    for(int i=0; i<2; i++){
        printf("Student %d\t", i+1);
        for(int j=0; j<3; j++){
            printf("%d\t", reportcard[i][j]);
        }
        printf("\n");
    }
    return 0;
}