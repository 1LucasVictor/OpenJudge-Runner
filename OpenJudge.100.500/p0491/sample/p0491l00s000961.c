#include <math.h>
#include <stdio.h>
#define MIN(a, b) ((a) < (b) ? (a) : (b))
int main() {
	long long n, k, min;
	scanf("%lld%lld", &n, &k);
	printf("%lld\n", MIN(MIN(llabs(n - n / k * k), llabs(n - (n / k - 1) * k)),
						 llabs(n - (n / k + 1) * k)));
	return 0;
}