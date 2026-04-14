#include <stdio.h>
int myfunc(){
    static int i=0;
    i++;
}
int main(){
    printf("value:%d",myfunc());
    printf("\nvalue:%d",myfunc());
    return 0;
}