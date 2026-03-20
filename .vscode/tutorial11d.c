#include <stdio.h>
int main() {
    int weight;
    float height;
    printf("Enter your weight (in kg): ");
    scanf("%d", &weight);
    printf("Enter your height (in meters): ");
    scanf("%f", &height);
    float BMI = weight / (height * height);
    printf("Your BMI is %.2f\n", BMI);
    switch ((int)(BMI)) {     //int and bmi ko again bracket me daalna hai
    case 0 ... 18:
        printf("You are underweight.\n");
        break;
    case 19 ... 24:
        printf("You have a normal weight.\n");
        break;
    case 25 ... 29:
        printf("You are overweight.\n");
        break;
    case 30 ... 100:
        printf("You are obese.\n");
        break;
    default:
        printf("Invalid BMI.\n");
    }
    return 0;
}