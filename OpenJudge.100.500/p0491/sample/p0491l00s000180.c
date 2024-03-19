#include <stdio.h>

int main()
{
	long long N, K;
	scanf("%lld %lld", &N, &K);

	long long x = N % K;
	if (x <= K / 2) printf("%lld\n", x);
	else printf("%lld\n", K - x);
	fflush(stdout);
	return 0;
}