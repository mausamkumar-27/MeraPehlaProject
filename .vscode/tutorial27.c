#include <stdio.h>
int main() {
    char a= '3';
    char*ptra=&a;
    printf("%p\n",ptra);
    ptra--;  // mtlb ghatega
    printf("%p\n",ptra); // mtlb 1 ghatega
    printf("%p",ptra-2); // mtlb 2 ghatega
    return 0;
}