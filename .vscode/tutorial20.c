#include <stdio.h>
int main(){
    int table;
    printf("enter table of\n");
    scanf("%d",&table);
    for(int i=1;i<=10;i++){
        printf("%d * %d = %d\n",table,i,table*i);
    }
    return 0;
}