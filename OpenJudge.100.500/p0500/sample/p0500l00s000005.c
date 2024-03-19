// ABC 157-C
// 2020.3.1 bal4u

#include <stdio.h>

int C[10], N;

int check(int n) {
	int i;
	for (i = 0; n; ++i) {
		if (C[i] >= 0) {
			if (C[i] != n % 10) return 0;
		}
		n /= 10;
	}
	return 1;
}

int main()
{
	int i, s, c, K, M, ans;

	scanf("%d%d", &N, &M);
	for (i = 0; i < N; ++i) C[i] = -1;
	for (i = 0; i < M; ++i) {
		scanf("%d%d", &s, &c);
		if (C[N-s] < 0) C[N-s] = c;
		else if (C[N-s] != c) goto NG;
	}
	if (N == 1 && C[0] <= 0) { puts("0"); return 0; }
	if (N == 1) i = 1, K = 10;
	else if (N == 2) i = 10, K = 100;
	else i = 100, K = 1000;
	for ( ; i < K; ++i) {
		if (check(i)) {
			printf("%d\n", i);
			return 0;
		}
	}
NG:	puts("-1");
	return 0;
}
