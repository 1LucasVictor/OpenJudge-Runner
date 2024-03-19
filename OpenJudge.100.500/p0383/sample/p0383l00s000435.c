#include <stdio.h>

int main(void){
	int n, m, l, i, j, k;
	int A[100][100] = { 0 }, B[100][100] = { 0 };
	long long int C[100][100] = { 0 };

	scanf("%d %d %d", &n, &m, &l);
	for (i = 0; i < n; i++){
		for (j = 0; j < m; j++){
			scanf("%d", &A[i][j]);
		}
	}
	for (i = 0; i < m; i++){
		for (j = 0; j < l; j++){
			scanf("%d", &B[i][j]);
		}
	}
	for (i = 0; i < n; i++){
		for (j = 0; j < l; j++){
			for (k = 0; k < m; k++){
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
	for (i = 0; i < n; i++){
		for (j = 0; j < l; j++){
			printf("%lld", C[i][j]);
			if (j < l - 1){
				printf(" ");
			}else{
				printf("\n");
			}
		}
	}
	return 0;
}