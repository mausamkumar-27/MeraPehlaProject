#include <stdio.h>
int main() {
    FILE *ptr = NULL;
    ptr = fopen("myfile.txt", "a+");
    fputc('M', ptr);
    fputs("Hello Mausam", ptr);
    fclose(ptr);
    return 0;
}