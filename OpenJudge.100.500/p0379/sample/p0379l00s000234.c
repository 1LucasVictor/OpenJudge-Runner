/* ITP1_6_D:Matrix Vector Multiplication */
/* 20181122 AOJ */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int A[100][100], B[100];
	int C[100] = {0};
	int n, m, i, j;

	scanf("%d%d", &n, &m);
	for(i = 0; i < n; i++) {
		for(j= 0; j < m; j++) {
			scanf("%d", &A[i][j]);
		}
	}

	for(i = 0; i < m; i++) {
		scanf("%d", &B[i]);
	}

	for(i = 0; i < n; i++) {
		for(j = 0; j < m; j++) {
			C[i] += A[i][j] * B[j];
		}
		printf("%d\n", C[i]);
	}

	return 0;
}
