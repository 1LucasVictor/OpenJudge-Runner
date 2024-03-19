#include <stdio.h>

int main()
{
    int x;
    int a, b, c, d;
    
    while (1) {
        scanf("%d", &x);
        if (x == 0)     break;
        
        a = x / 1000;
        b = (x - a * 1000) / 100;
        c = (x - (a * 1000 + b * 100)) / 10;
        d = (x - (a * 1000 + b * 100 + c * 10)) / 1;
        printf("%d\n", a + b + c + d);
    }
    
    return 0;
}