#include <stdio.h>

long gcd(long x, long y)
{
        if (y == 0)
                return x;
        else
                return gcd(y, x % y);
}

long lcm(long x, long y)
{
        return x / gcd(x, y) * y;
}

int main(void)
{
        long x, y;
        for (;;) {
                if (scanf("%ld%ld", &x, &y) == EOF)
                        return 0;
                printf("%ld %ld\n", gcd(x, y), lcm(x, y));
        }
}