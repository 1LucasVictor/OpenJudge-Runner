#include <stdio.h>

int main(void)
{
    long long n, k, t;
    scanf("%lld%lld", &n, &k);
    t = n % k;
    if(t < -(t - k))
        printf("%lld", t);
    else
        printf("%lld", -(t-k));
	return 0;
}