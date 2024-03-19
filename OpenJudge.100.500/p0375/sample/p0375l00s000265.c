#include <stdio.h>

int main(void) {
    int i, n, x;
    for(n += i = scanf("%d", &n); i < n; i++) {
       if(!(i % 3)) {
           printf(" %d", i);
       } else {
           for(x = i; x; x /= 10) {
               if(x % 10 == 3) {
                   printf(" %d", i);
                   break;
               }
           }
       }
    }
    printf("\n");
    return 0;
}