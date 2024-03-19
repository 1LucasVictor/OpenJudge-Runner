#include <stdio.h>
#include <stdlib.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))
typedef long long ll;

int main(void)
{
    ll n, k;

    scanf("%lld%lld", &n, &k);

    if (n % k == 0)
    {
        puts("0");
        return 0;
    }

    while (1)
    {
        ll tmp = n;
        if (n - k >= 0)
            n = n - k;
        else
            n = -(n - k);
        if (tmp < n)
        {
            n = tmp;
            break;
        }
    }

    printf("%lld\n", n);

    return 0;
}