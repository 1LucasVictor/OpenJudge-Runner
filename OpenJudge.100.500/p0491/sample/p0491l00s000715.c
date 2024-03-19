#include <stdio.h>

int main()
{
    long long n,k;

    scanf("%lld %lld",&n,&k);

    long long ans = 0;
    ans = n % k < k - n % k ? n % k:k - n % k;
    printf("%lld",ans);
}
