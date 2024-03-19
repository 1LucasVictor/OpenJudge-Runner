#include <stdio.h>

int gcd(int x, int y)
{
    if (x == 0){
        return (y);
    }
    return (gcd(y % x, x));
}

int main(void)
{
    int x, y;

    scanf("%d %d", &x, &y);
    printf("%d\n", gcd(x, y));

    return (0);
}