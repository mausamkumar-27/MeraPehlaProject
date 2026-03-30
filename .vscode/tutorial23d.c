#include <stdio.h>
int main(){
    int seats[3][4]= {0};
    printf("Kaunsi row mein baithna hai? (0-2):\n");
    int row;
    scanf("%d", &row);
    printf("Kaunsi seat mein baithna hai? (0-3):\n");
    int seat;
    scanf("%d", &seat);
    if(seats[row][seat]==0){
        seats[row][seat]=1;
        printf("Seat booked successfully!\n");
    }
    else {
        printf("Seat is already booked!\n");
    }
    printf("\n---Cinema Hall View---\n");
    for(int i=0; i<3; i++) {
        for(int j=0; j<4; j++) {
            if(seats[i][j]== 1)
            printf("[Booked] ");
        else
        printf("[empty]");


            }
            printf("\n");
        }
        return 0;
    }