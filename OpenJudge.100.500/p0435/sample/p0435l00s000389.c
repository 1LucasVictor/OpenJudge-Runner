#include <stdio.h>

long long i, N, D, X[200001], Y[200001], count;

int main() {
	count = 0;
	scanf("%lld %lld", &N, &D);
	for (i = 1; i <= N; i++) {
		scanf("%lld %lld", &X[i], &Y[i]);
		if (D * D >= X[i] * X[i] + Y[i] * Y[i]) {
			count = count + 1;
		}
	}printf("%lld", count);
	return 0;
}