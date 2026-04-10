#include <stdio.h>
int fib(int n){
    if(n==1||n==2){
        return n-1;
    }else{
        return fib(n-1)+fib(n-2);
    }
}
int main(){
    int n;
    printf("Enter the index to get fibonacci series \n");
    scanf("%d",&n);
    //printf("The value of fibonacci series at position is %d\n",n,fib(n));// 2.n,fib(n) do variable to do %d ko laana hoga other wise wo n wala input ko ans krega
    printf("The value of fibonacci series at position %d is %d\n",n,fib(n));
   //int fib(intn){   1. main ke ander dusra function nahi ho skta,jaise ek ghar ke andar dusra ghar nahi bn skta,pehle ke bgl me bnana hoga isliye fib fun ko main fun. ke upper likho ya niche
   // if(n==1||n==2){
      //  return n-1;
    //} else{
       // return (n-1)+(n-2);
   // }
//}
    return 0;
}