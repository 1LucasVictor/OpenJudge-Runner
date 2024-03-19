#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

int main(void)
{
	long long n, k;
	scanf("%lld %lld", &n, &k);

	if ((n % k) > k)
		printf("%lld", n % k < (n % k) - k ? n % k : (n % k) - k);
	else
		printf("%lld", n % k < k - (n % k) ? n % k : k - (n % k));

	return 0;
}