#include <stdio.h>
int main() {
    FILE *ptr = NULL;
    ptr = fopen("myfile.txt", "r");
    char c = fgetc(ptr);
    printf("The character I read was %c\n", c);
    c = fgetc(ptr);
    printf("The character I read was %c\n", c);   //jitni baar fgetc call karoge utni baar next character read hoga 
    fclose(ptr);
    return 0;
}