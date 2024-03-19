#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

int main(void)
{
	unsigned long long n, k;
	scanf("%llu %llu", &n, &k);

	n %= k;
	printf("%llu", abs(n - k) < n ? abs(n - k) : n);
	return 0;
}
