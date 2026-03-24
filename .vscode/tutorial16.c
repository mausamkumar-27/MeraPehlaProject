#include <stdio.h>
int main() {
    for (int i=1; i<=10; i++) {
        // 1. Continue ka asar: agar ginti 3 pr pahuchi,to use skip kr do aur agle number pr chalo 
        if (i == 3) {
            printf("ginti 3 pr pahuchi, use skip kro\n");
            continue;
        }
        // 2. Break ka asar: agar ginti 7 pr pahuchi,to use stop kro aur loop se bahar niklo
        if (i == 7) {
            printf("Bs bahut hua! loop break kr do.\n");
            break;
        }
        printf("Number:%d\n ", i); 
}
printf("loop ke bahar aa gye");
return 0;
}