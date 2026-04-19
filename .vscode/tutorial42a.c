#include <stdio.h>
int b=34;
//int func1(intb)   tumne int aur b ke beech space nahi diya islye o\p me 34,340 diya
int func1(int b)
{
    printf("the value of b inside func1 is %d\n",b);
    return b* 10;
}
int main()
{
    int b=344;
    int val=func1(b);
    int *ptr =&val;
    printf("the value of b inside func1 is %d\n",val);
    return 0;
}