#include <stdio.h>
int main() {
    int patient;
    for ( int i=1; i<=7; i++) {
        if (i==3) {
            printf("patient 3 ko diabetes hai,dusre doctor ke pass bhejo\n");
            continue;
        }
            if(i==5) {
                printf("patient 5 ko cancer hai,AIIMS bhejo\n");
                break; //6,7 ko kal check krenga aisa mana hun maine
            }
            printf("patient %d ko kuch nahi hai\n",i);
        }
            return 0;
        }
        
        


