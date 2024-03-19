#include <stdio.h>
#include <inttypes.h>

int N;
int64_t D;
int64_t X[271828], Y[271828];

int main(void) {
	int i;
	int mizuhasu = 0;
	if(scanf("%d%" SCNd64, &N, &D) != 2) return 1;
	for (i = 0; i < N; i++) {
		if (scanf("%"SCNd64 "%" SCNd64, &X[i], &Y[i]) != 2) return 1;
	}
	for (i = 0; i < N; i++) {
		if(X[i] * X[i] + Y[i] * Y[i] <= D * D) mizuhasu++;
	}
	printf("%d\n", mizuhasu);
	return 0;
}
