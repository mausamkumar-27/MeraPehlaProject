#include <stdio.h>
int main() {
    FILE *ptr = NULL;
    ptr = fopen("myfile.txt", "r");
    char str[100];
    fgets(str, 50, ptr);
    printf("The string is %s\n", str);
    fclose(ptr);
    return 0;
}