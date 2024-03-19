#include <stdio.h>

int main() {
	long long n;
	long long m;
	long long p;

	scanf("%lld %lld.%lld", &n, &m, &p);
	printf("%lld\n", n * (m * 100 + p) / 100);

	return 0;
}
