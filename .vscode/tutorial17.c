#include <stdio.h>
int main(){
    int pin =1234; //sahi pin
    int entered_pin;
    int attempts = 0;
        // hmne ek label banaya hai login naam se
        login:
        printf("apna 4-digit pin enter karein: ");
        scanf("%d", &entered_pin);
        if (entered_pin != pin) {
            attempts++;
            if (attempts >= 3) {
                printf("3 bar galat pin enter kiya gaya hai. Access denied.\n");
                return 1;
            }
            printf("Galat pin. Kripya phir se try karein.\n");
            goto login;

        }

}