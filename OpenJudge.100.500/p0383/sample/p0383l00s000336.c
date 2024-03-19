/* ITP1_7_D:Matrix Multiplication */
/* 20181123 AOJ */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n, m, l;
	int i, j, k;
	int A[100][100], B[100][100];
	long long C[100][100] = {0};

	scanf("%d %d %d", &n, &m, &l);
	for(i = 0; i < n; i++) {
		for(j = 0; j < m; j++) {
			scanf("%d", &A[i][j]);
		}
	}

	for(i = 0; i < m; i++) {
		for(j = 0; j < l; j++) {
			scanf("%d", &B[i][j]);
		}
	}

	for(i = 0; i < n; i++) {
		for(k = 0; k < l; k++) {
			for(j = 0; j < m; j++) {
				C[i][k]  +=  A[i][j] * B[j][k];
			}
		}	
	}

	for(i = 0; i < n; i++) {
		for(j = 0; j < l - 1; j++) {
			printf("%ld ", C[i][j]);
		}
		printf("%ld\n", C[i][j]);
	}

	return 0;
}
