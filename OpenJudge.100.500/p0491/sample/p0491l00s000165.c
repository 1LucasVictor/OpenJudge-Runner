#include<stdio.h>

typedef unsigned long long int ulli;

int main(void)
{
	ulli N, K;
	scanf("%lld %lld", &N, &K);
	ulli i=N/K;
	if (i*K+K/2 >= N) {
		printf("%lld", N - i* K);
	}
	else {
		printf("%lld", (i+1) * K - N);
	}

	return 0;
}