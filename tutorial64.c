#include <stdio.h>
int main() {
    FILE *ptr = NULL;
    char string[100] = "This content was produced by tutorial64.c";
    // ***** Reading of file *****
    ptr = fopen("myfile.txt", "r");
    fgets(string, sizeof(string), ptr);
    printf("The content of the file is: %s\n", string);
    fclose(ptr);

    // ***** Writing a file *****
    ptr = fopen("myfile.txt", "a");
    fprintf(ptr, "%s\n", string);
    fclose(ptr);
    return 0;
}