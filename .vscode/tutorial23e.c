#include <stdio.h>
int main(){
    int seats[3][4]= {0};
    int row, seat, choice;
    while(1){
        printf("\n---Cinema Booking System---");
        printf("1. Seat Book Karien\n");
        printf("2. Exit\n");
        printf("Choice chunien:\n");
        scanf("%d", &choice);

    if(choice == 2){
        break;
    }
    printf("Kaunsi row meain baithna hai? (0-2):\n");
    scanf("%d", &row);
    printf("Kaunsi seat meain baithna hai? (0-3):\n");
    scanf("%d", &seat);
    if (seats[row][seat]==0){
        seats[row][seat]=1;
        printf("Seat booked successfully!\n");
    } else {
        printf("Seat is already booked.\n");
    }
    printf("\n---Cinema Hall Status---\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            if(seats[i][j]==1){
                printf("[Booked] ");
            } else {
                printf("[Available] ");
            }
        }
        printf("\n");
    }
}
return 0;
}
