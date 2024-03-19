#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define ll long long
ll Max(ll a, ll b)
{
    return (a > b) ? a : b;
}
int main(void)
{
    ll a, b, c, k;
    scanf("%lld%lld%lld%lld", &a, &b, &c, &k);
    if (k <= a)
        printf("%lld\n", k);
    else if (k <= a + b)
        printf("%lld\n", a);
    else
        printf("%lld\n", Max(0, a - c));
    return 0;
}