// 1_7_B
#include<stdio.h>

int main(){
	int n, m, l, i, j, k;
	scanf("%d %d %d", &n, &m, &l);
	long long int mtrxA[n][m];
	long long int mtrxB[m][l];
	long long int result[n][l]; 
	
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			scanf("%d", &mtrxA[i][j]);
		}
	}
	for(j = 0; j < m; j++){
		for(k = 0; k < l; k++){
			scanf("%d", &mtrxB[j][k]);
		}
	}

	for(i = 0; i < n; i++){
		for(k = 0; k < l; k++){
			result[i][k] = 0;
			for(j = 0; j < m; j++){
				result[i][k] += mtrxA[i][j]*mtrxB[j][k];
			}
		}
	}

	for(i = 0; i < n; i++){
		for(k = 0; k < l-1; k++){
			printf("%d ", result[i][k]);
		}
		printf("%d\n", result[i][k]);
	}
	return 0;
}