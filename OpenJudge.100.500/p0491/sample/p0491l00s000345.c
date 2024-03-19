#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<assert.h>

#define max(a,b) ((a)>(b))?(a):(b)
#define min(a,b) ((a)>(b))?(b):(a)

typedef long long ll;
typedef unsigned long long ull;

int main(void)
{
    ll n, k;
    scanf("%lld%lld", &n, &k);

    ll res = n % k;
    if (res <= abs(res - k))
    {
        printf("%d", res);
    }
    else
    {
        printf("%d", abs(res - k));
    }
}