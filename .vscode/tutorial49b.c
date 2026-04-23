#include <stdio.h>
void counter() {
  // static int count = 0;
  static int count;
    count++;
    printf("Counter ki value hai: %d\n", count);
}
int main() {
    printf("---Pehli baar call---\n");
    counter();
    printf("---Dusri baar call---\n");
    counter();
    printf("---Teesri baar call---\n");
    counter();
    return 0;
}