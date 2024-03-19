#include <stdio.h>

int main(void)
{
	int n, m, l, i, j, k, x, A[100][100], B[100][100];
	double C[100][100];
	
	for(j = 0; j < 100; j++){
		for(k = 0; k < 100; k++){
			C[j][k] = 0;
		}
	}
	
	scanf("%d%d%d%*c", &n, &m, &l);
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			scanf("%d", &x);
			A[i][j] = x;
		}
	}
	for(j = 0; j < m; j++){
		for(k = 0; k < l; k++){
			scanf("%d", &x);
			B[j][k] = x;
		}
	}
	
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			for(k = 0; k < l; k++){
				C[i][k] += (A[i][j] * B[j][k]);
			}
		}
		for(k = 0; k < l; k++){
			if(k != 0) printf(" ");
			printf("%.0lf", C[i][k]);
		}
		printf("\n");
	}
	
	return(0);
}

