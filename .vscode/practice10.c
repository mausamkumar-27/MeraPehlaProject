#include <stdio.h>
int main() {
    int side; int radius; float PI = 3.14; int length; int breadth;
    printf("Enter the length of side of square\n");
    scanf("%d", &side);
    printf("The area of square is %d\n", side*side);
    printf("Enter the radius of circle\n");
    scanf("%d", &radius);
    printf("The area of circle is %.2f\n", PI*radius*radius);
    printf("Enter the length and breadth of rectangle\n");
    scanf("%d %d", &length, &breadth);
    printf("The area of rectangle is %d\n", length*breadth);
    return 0;
}