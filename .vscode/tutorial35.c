#include <string.h>
int main() {
    char s1[]="Harry";
    char s2[]="Ravi";
    char s3[54];
   // puts(strcat(s1,s2));
  // printf("the length of s1 is %d\n",strlen(s1));
   //printf("the length of s2 is %d\n",strlen(s2));
   strcpy(s3,strcat(s1,s2));
   puts(s3);
    return 0;
}