#include <stdio.h>
int main() {
    int PIN, Balance = 10000;
    int Choice;
    int Amount;
    printf("Welcome to ATM \n");
    printf("Enter your PIN: \n");
    scanf("%d", &PIN);
    if (PIN ==1234) {
        printf("\n--ATM Menu---\n");
        printf("1. Balance Check\n");
        printf("2.Withdraw Cash\n");
        printf("3.Deposit Cash\n");
        printf("4.Exit\n");
        printf("Enter your choice: \n");
        scanf("%d", &Choice); 
        switch (Choice) {
            case 1:
            printf("Your current balance is: %d\n", Balance);//yahan %d lagane se computer khud bteyega ki kitna balance hai
            //scanf("%d", &Balance); user se pu6ega ki kitna current balance hai
            break;
            case 2:
            printf("Enter your amount to withdraw: \n");
            scanf("%d", &Amount);
            if (Amount > Balance) {
                printf("Insufficient Balance\n");
            } else {
                Amount <= Balance;
                printf("Please collect your cash\n");
                printf("Your currrent balance is: %d\n", Balance - Amount);
            }
            break;
            case 3:
            printf("Enter your amount to deposit: \n");
            scanf("%d", &Amount);//yahan printf add krne ke baad finally amount kitna hua wo pta chalega
            printf("Your current balance is: %d\n", Balance + Amount);
            break;
            case 4:
            printf("Thanks for using ATM\n");
            break;
            default:
            printf("Invalid choice\n");
        }
        return 0;
    }
}