#include <stdio.h>
int main() {
    char a= '3';
    char*ptra=&a;
    printf("%p\n",ptra);
    ptra--;  // mtlb ghatega
    printf("%p\n",ptra); // mtlb char to 1 byte ghatega
    printf("%p",ptra-2); // mtlb 2 byte ghatega
    return 0;
}