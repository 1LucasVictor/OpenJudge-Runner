#include<stdio.h>

int main(void)
{
	unsigned long long int a, b, c, sum, k;

	scanf("%lld%lld%lld%lld", &a, &b, &c, &k);

	if (a >= k) {
		printf("%lld", k);
		return 0;
	}

	if (a + b >= k) {
		printf("%lld", a);
		return 0;
	}

	else {
		printf("%lld", (a - (k - b - a)));
		return 0;
	}

	return 0;
}