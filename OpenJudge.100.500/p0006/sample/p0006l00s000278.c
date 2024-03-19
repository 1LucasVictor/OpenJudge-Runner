#include <stdio.h>

int main(int argc, const char * argv[])
{
    int i, n, money = 100000;
    
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        money *= 1.05;
        if (money % 1000)
            money = money + (1000 - (money % 1000));
    }
    
    printf("%d\n", money);
    
    return 0;
}