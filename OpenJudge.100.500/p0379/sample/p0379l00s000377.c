#include<stdio.h>

int main(void){

	int A[100][100] = { 0 };
	int b[100] = { 0 };
	int c[100] = { 0 };
	int n, m, i, j;

	scanf("%d %d", &n, &m);

	for (i = 0; i < n; i++){
		for (j = 0; j < m; j++){
			scanf("%d", &A[i][j]);
		}
	}
	for (j = 0; j < m; j++){
		scanf("%d", &b[j]);
	}

	for (i = 0; i < n; i++){
		for (j = 0; j < m; j++){
			c[i] += A[i][j] * b[j];
		}
		printf("%d\n", c[i]);
	}

	return 0;
}