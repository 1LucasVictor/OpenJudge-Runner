#include <stdio.h>

#define DEBT 100000

int main(void)
{
    int n, money = DEBT, i, r;
    
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        money *= 1.05;
        r = money % 1000;
        if (r != 0) {
            money += 1000 - r;
        }
    }
    printf("%d\n", money);
    return 0;
}