#include <stdio.h>
int main(){
    int marks[5];
    float sum=0,average;
    printf("Enter marks for 5 subjects:\n");
    for(int i=0; i<5; i++){
        scanf("%d", &marks[i]);
        sum += marks[i];
    }
    average = sum/5;
    printf("\n---Results---");
    printf("Total marks: %.2f\n", sum);
    printf("Aapka Average marks hai: %.2f\n", average);
    return 0;

}