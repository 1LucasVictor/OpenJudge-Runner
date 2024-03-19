#include <stdio.h>
#include <stdlib.h>
#define min(a, b) ((a) < (b) ? (a) : (b))
typedef long long ll;

int main(void)
{
    ll n, k;
    scanf("%lld%lld", &n, &k);

    n = n % k;
    printf("%lld\n", min(abs(n - k), n));
    
    return 0;
}