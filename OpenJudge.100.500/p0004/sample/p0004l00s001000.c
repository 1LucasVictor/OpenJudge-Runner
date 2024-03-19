#include <stdio.h>

long gcd(x, y)
{
    if (x % y == 0)
    {
        return y;
    }
    return gcd(y, x % y);
}

int main()
{
    long x, y;
    while (EOF != scanf("%ld %ld", &x, &y))
    {
        long g;
        if (x > y)
        {
            g = gcd(x, y);
        }
        else
        {
            g = gcd(y, x);
        }

        printf("%ld %ld\n", g, (x * y) / g);
    }

    return 0;
}