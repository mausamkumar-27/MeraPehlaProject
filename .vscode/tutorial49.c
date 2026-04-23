#include <stdio.h>
#include <stdlib.h>
void func() {
    auto int a; // 'auto' is optional in c
    printf("Auto Variable: %d\n", a);
    return;
}
int main() {
    func();
    return 0;
}