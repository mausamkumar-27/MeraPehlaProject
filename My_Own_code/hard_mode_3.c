#include <stdio.h>
int main(){
    int reportcard[2][3];
    for(int i=0;i<2;i++){
    printf("Enter marks for students %d\n",i+1);
    for(int j=0;j<3;j++){
        scanf("%d",&reportcard[i][j]);
    }
    printf("\n");
    }
    printf("\n---Reportcard---\n");
    printf("std\tsub1\tsub2\tsub3\n");
    for(int i=0;i<2;i++){
        //printf("student%d\t",i++); yahan value me bhi 1 add and variable me bhi change ho rha tha 
        printf("students%d\t",i+1); //i+1 krne se value me 1 add ho jayega
        for(int j=0;j<3;j++){
        //printf("subject%d\t",j++); 
        printf("%d\t",reportcard[i][j]);
    }
    printf("\n");
}
return 0;
}