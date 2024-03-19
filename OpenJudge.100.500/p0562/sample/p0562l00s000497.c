#include <stdio.h>

int main(void) {
    int a, b, total = 0, count = 0;
    scanf("%d%d", &a, &b);
    
    while(1) {
        if(total >= b) break;
        total += a;
        count++;
    }
    printf("%d\n", count);
    return 0;
}