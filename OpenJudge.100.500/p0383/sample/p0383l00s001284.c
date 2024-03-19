#include <stdio.h>
#define MAX 100

int main(void){
	int a[MAX][MAX], b[MAX][MAX], i, j, k, n, m, l;
	long c[MAX][MAX];
	scanf("%d %d %d", &n, &m, &l);
	
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			scanf("%d", &a[i][j]);
		}
	}

	for(j = 0; j < m; j++){
		for(k = 0; k < l; k++){
			scanf("%d", &b[j][k]);
		}
	}

	for(i = 0; i < n; i++){
		for(k = 0; k < l; k++){
			c[i][k] = 0;
			for(j = 0; j < m; j++){
				c[i][k] += a[i][j] * b[j][k];
			}
		}
	}

	for(i = 0; i < n; i++){
		for(k = 0; k < l; k++){
			if(k != l - 1){
				printf("%ld ", c[i][k]);
			}
			else{
				printf("%ld\n", c[i][k]);
			}
		}
	}
	
	return 0;
}