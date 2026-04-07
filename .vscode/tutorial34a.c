#include <stdio.h>
void printStr(char str[]) {
    int i=0;
    while(str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
    printf("\n");
}
int main()
{
  //char str[] ={'h','a','r','r','y','\0'};
  char str[]="harry";
  printStr(str);
  return 0;
}