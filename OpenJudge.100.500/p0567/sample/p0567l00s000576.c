#include <stdio.h>
 
int main(void)
{
 
    int a, b, c, d;
 
    scanf("%d %d %d", &a, &b, &c);
 
    d = c + b - a;
 
    if (d <= 0)
    {
        d = 0;
    }
    printf("%d\n", d);
    return 0;
}