// ABC 161-C
// 2020.4.4 bal4u

#include <stdio.h>

typedef long long ll;

#define MIN(a,b) ((a)<=(b)?(a):(b))
#define ABS(a) ((a)>=0?(a):-(a))

int main()
{
	ll N, K;

	scanf("%lld%lld", &N, &K);
	if (N >= K) N %= K;
	printf("%lld\n", MIN(N, ABS(N-K)));
	return 0;
}
