#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define ll long long

int main(void)
{
    int n;
    int count = 0;
    long double dist, d;
    ll x, y;
    scanf("%d %Lf", &n, &d);
    for (int i = 0; i < n; i++)
    {
        scanf("%lld %lld", &x, &y);
        dist = sqrt((x * x) + (y * y));
        if (dist <= d)
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}