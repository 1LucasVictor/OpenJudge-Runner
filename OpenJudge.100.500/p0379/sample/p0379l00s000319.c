#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, m, i, j, Vector[4], Matrix[4][3], sum[3] = { 0,0,0 };
	scanf("%d %d", &n, &m);

	for ( i = 0; i < n; i++){
		for ( j = 0; j < m; j++){
			scanf("%d", &Matrix[j][i]);
		}
		
	}
	for ( i = 0; i < m; i++){
		scanf("%d", &Vector[i]);
	}
	for ( i = 0; i < n; i++){
		for (j = 0; j < m; j++) {
			sum[i] += Matrix[j][i] * Vector[j];
		}
	}
	for ( i = 0; i < n; i++){
		printf("%d\n", sum[i]);
	}
}