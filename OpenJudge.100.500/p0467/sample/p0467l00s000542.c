#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define ll long long
int main(void)
{
    ll a, b, c, k, i;
    scanf("%lld%lld%lld%lld", &a, &b, &c, &k);
    if (k <= a)
        printf("%lld\n", k);
    else if (k <= a + b)
        printf("%lld\n", a);
    else
        printf("%lld\n", a - (k - a - b));
    return 0;
}