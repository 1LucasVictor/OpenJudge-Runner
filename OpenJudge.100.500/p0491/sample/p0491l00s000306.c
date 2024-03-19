#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

int main(void)
{
	long long n, k;
	scanf("%lld %lld", &n, &k);

	n %= k;
	printf("%lld", abs(n - k) < n ? abs(n - k) : n);
	return 0;
}
