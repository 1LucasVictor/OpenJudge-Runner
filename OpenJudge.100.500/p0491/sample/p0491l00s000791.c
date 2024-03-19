#include <stdio.h>
int main() {
	long long n, k, r, R, ans = 0;
	scanf("%lld %lld", &n, &k);
	r = n % k;
	R = k - r;
	if (r <= R) {
		printf("%lld", r);
	}
	else {
		printf("%lld", R);
	}
}