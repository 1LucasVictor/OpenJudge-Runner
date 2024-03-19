#include <stdio.h>

int A[100][100] = {0};
int B[100][100] = {0};
int C[100][100] = {0};

int main(void) {
	int n, m, l;
	int i, j, k;
	scanf(" %d %d %d", &n, &m, &l);

	for (i = 0; i < n; ++i) {
		for (j = 0; j < m; ++j) {
			scanf(" %d", &A[i][j]);
		}
	}

	for (i = 0; i < m; ++i) {
		for (j = 0; j < l; ++j) {
			scanf(" %d", &B[i][j]);
		}
	}

	for (i = 0; i < n; ++i) {
		for (j = 0; j < m; ++j) {
			for (k = 0; k < l; ++k) {
				C[i][k] += A[i][j] * B[j][k];
			}
		}
	}

	for (i = 0; i < n; ++i) {
		for (j = 0; j < l; ++j) {
			printf("%d%c", C[i][j], (j == l - 1)?'\n':' ');
		}
	}
	
	return 0;
}