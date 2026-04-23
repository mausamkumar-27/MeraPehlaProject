#include <stdio.h>
int harry;
void func1() {
    printf("func1 me harry ki value: %d\n", harry);
}
int main() {
    printf("Main me harry ki starting value: %d\n", harry);
    harry = 10;
    printf("Main me harry ki badli hui value: %d\n", harry);
    func1();
    return 0;
}