#include <stdio.h>
int main() {
    int PA; float Rate; int time; float SI;
    printf("Enter the principal amount\n");
    scanf("%d", &PA);
    printf("Enter the rate of interest\n");
    scanf("%f", &Rate);
    printf("Enter the time period\n");
    scanf("%d", &time);
    SI = (PA * Rate * time) / 100;
    printf("The simple interest is %.2f\n", SI);
    return 0;
}