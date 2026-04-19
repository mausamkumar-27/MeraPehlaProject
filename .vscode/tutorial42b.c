#include <stdio.h>
int b=34;
int func1(int b1)
{
    //static int myvar=98;
    static int myvar;
    printf("the value of myvar is %d\n",myvar);
    myvar++;
    return b1 + myvar;
}
int main()
{
    int b=344;
    int val=func1(b);
    val=func1(b);
    val=func1(b);
    val=func1(b);
    val=func1(b);
    int *ptr =&val;
    return 0;
}
