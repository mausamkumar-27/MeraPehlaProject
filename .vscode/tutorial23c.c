#include <stdio.h>
int main(){
    int seats[3][4]={0};
    printf("Kaunsi row mein baithna hai? (0-2): ");
    int row;
    scanf("%d", &row);
    printf("Kaunsi seat mein baithna hai? (0-3): ");
    int seat;
    scanf("%d", &seat);
    if(seats[row][seat]==0){
        seats[row][seat]=1;
        printf("Seat booked successfully!\n");
    }
    else{
        printf("Seat is already booked!\n");
    }
    return 0;

}