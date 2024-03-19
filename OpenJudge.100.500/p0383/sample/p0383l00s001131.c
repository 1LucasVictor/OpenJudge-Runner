#include <stdio.h>
#define N 100
#define M 100
#define L 100
int main(void)
{
	int n, m, l, i, j, k;
	int A[N][M];
	int B[M][L];
	unsigned long C[N][L] = {0};

	scanf("%d%d%d", &n, &m, &l);
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
		scanf("%d", &A[i][j]);
		}
	}
	for(i=0; i<m; i++){
		for(j=0; j<l; j++){
		scanf("%d", &B[i][j]);
		}
	}
	for(i=0; i<n; i++){
		for(j=0; j<l; j++){
			for(k=0; k<m; k++){
				C[i][j] += A[i][k] * B[k][j];
			}
			printf("%d", C[i][j]);
			if(j < l-1){
				printf(" ");
			}else{
				puts("");
			}
		}
	}
	return 0;
}