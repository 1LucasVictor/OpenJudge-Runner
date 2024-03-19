#include <stdio.h>

int main(void) {
	int n, m;
	int i, j;
	int A[100][100];
	int B[100];
	int C[100];
	
	for(i = 0; i < 100; i++) {
		C[i] = 0;
	}

	scanf("%d %d", &n, &m);
	
	for(i = 0; i < n; i++) {
		for(j = 0; j < m; j++) {
			scanf("%d", &A[i][j]);
		}
	}
	
	for(j = 0; j < m; j++) {
		scanf("%d", &B[j]);
	}
	
	for(i = 0; i < n; i++) {
		for(j = 0; j < m; j++) {
			C[i] += A[i][j] * B[j];
		}
		
		printf("%d\n", C[i]);
	}
	
	return 0;
}