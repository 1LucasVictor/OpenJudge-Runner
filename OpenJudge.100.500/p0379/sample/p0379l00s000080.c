#include<stdio.h>

int main(void){

	int n, m, b, c, i, j, A[101][101], C[101];
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			scanf("%d", &A[i][j]);
		}
	}

	for (j = 0; j < m; j++) {
		scanf("%d", &b);
		for (i = 0; i < n; i++) {
			C[i] += b * A[i][j];
		}
	}
	for (i = 0; i < n; i++) {
		printf("%d\n", C[i]);
	}
    return 0;
}
