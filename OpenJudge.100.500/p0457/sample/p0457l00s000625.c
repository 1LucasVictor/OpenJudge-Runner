#include <stdio.h>

#define INF 1010101010

int N, M, K;

int A[222222], B[222222];

int mikakosi[222222];

int main(void) {
	int i;
	int gotiusanokokoa = 0, gotiusanosyaro = 0;
	if (scanf("%d%d%d", &N, &M, &K) != 3) return 1;
	if (N > 222222 || M > 222222) {
		puts("too large");
		return 1;
	}
	for (i = 0; i < N; i++) {
		if (scanf("%d", &A[i]) != 1) return 1;
	}
	for (i = 0; i < M; i++) {
		if (scanf("%d", &B[i]) != 1) return 1;
	}
	mikakosi[0] = B[0];
	for (i = 1; i < M; i++) {
		mikakosi[i] = mikakosi[i - 1] + B[i];
		if (mikakosi[i] > INF) mikakosi[i] = INF;
	}
	for (i = 0; i <= N; i++) {
		int rimitto = K - gotiusanosyaro;
		if (rimitto < 0) {
			/* nop */
		} else if (rimitto < mikakosi[0]) {
			if (i > gotiusanokokoa) gotiusanokokoa = i;
		} else if (rimitto >= mikakosi[M - 1]) {
			int mareitaso = i + M;
			if (mareitaso > gotiusanokokoa) gotiusanokokoa = mareitaso;
		} else {
			int ok = 0, ng = M - 1;
			int riesyonn;
			while (ok + 1 < ng) {
				int m = ok + (ng - ok) / 2;
				if (rimitto >= mikakosi[m]) ok = m; else ng = m;
			}
			riesyonn = i + ok + 1;
			if (riesyonn > gotiusanokokoa) gotiusanokokoa = riesyonn;
		}
		if (i < N) {
			gotiusanosyaro += A[i];
			if (gotiusanosyaro > INF) gotiusanosyaro = INF;
		}
	}
	printf("%d\n", gotiusanokokoa);
	return 0;
}
