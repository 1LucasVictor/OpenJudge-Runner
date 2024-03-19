#include <stdio.h>
#define N 100
#define M 100
int main(void)
{
	int n, m, i, j;
	int A[N][M];
	int b[M];
	int c[N] = {0};
	scanf("%d %d", &n, &m);
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
		scanf("%d", &A[i][j]);
		}
	}
	for(j=0; j<m; j++){
		scanf("%d", &b[j]);
	}
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			c[i] += A[i][j] * b[j];
		}
		printf("%d\n", c[i]);
	}
	return 0;
}