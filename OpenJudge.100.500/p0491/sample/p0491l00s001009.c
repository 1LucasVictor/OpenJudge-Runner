#include <stdio.h>
int main()
{
    long long N, K, x;
    scanf("%lld %lld", &N, &K);
    x = N % K;
    if (x > K - x)
        x = K - x;
    printf("%lld\n", x);
    return 0;
}