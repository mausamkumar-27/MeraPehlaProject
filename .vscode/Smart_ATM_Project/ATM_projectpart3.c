 #include <stdio.h>
int main() {
    char Language;
    int PIN=1234;
    int Balance =10000;
    int Choice;
    int Amount;
    printf("Select your language: \n");
    printf("A. English \n");
    printf("B. Hindi \n");
    printf("Enter your Language: \n");
    scanf("%c", &Language);
    if(Language == 'A') {
        printf("Enter your PIN: \n");
        scanf("%d", &PIN);
        if (PIN ==1234) {
            int run=1;
            while(run) {
                printf("1. Check Balance\n");
                printf("2. Withdraw Cash\n");
                printf("3. Deposit Cash\n");
                printf("4. Enquiry\n");
                printf("Enter your choice\n");
                scanf("%d", &Choice);
            switch (Choice) {
                case 1:
                printf("Your current balance is: %d\n", Balance);
                break;
                case 2:
                printf("Enter your amount to withdraw: \n");
                scanf("%d", &Amount);
                if (Amount > Balance) {
                printf("Insufficient Balance\n");
                } else {
                    Amount <= Balance;
                    printf("Please collect your cash\n");
                    printf("Your current balance is: %d\n", Balance - Amount);
                }
                break;
                case 3:
                printf("Enter your amount to deposit: \n");
                scanf("%d", &Amount);
                printf("Your current balance is: %d\n", Balance + Amount);
                break;
                case 4:
                printf("Enquiry\n");
                break;
                default:
                printf("Invalid choice\n");
                break;
            }  //switch wala bracket
        }   //while wala bracket,yahin pr close kiya bcz mujhe bs itna hi part ko repeat krna tha
    for(run==0;run<=3;run++){
        printf("Enter correct PIN:\n");
        scanf("%d",&PIN);
    }
    }   // if PIN wala bracket
}    // if language wala bracket
return 0;
}
