#include <stdio.h>
int main()
{
    long long int a, b, c, d;
    scanf("%lld%lld", &a, &b);
    c = a % b;
    d = b - c;
    if (c >= d)
    {
        printf("%lld", d);
    }
    else
    {
        printf("%lld", c);
    }
    return 0;
}
