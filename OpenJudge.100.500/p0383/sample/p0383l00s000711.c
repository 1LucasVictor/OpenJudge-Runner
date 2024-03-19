#include <stdio.h>

int main(void) {
	int n, m, l;
	int a[100][100] = {}, b[100][100] = {};
	int i, j, k;
	
	scanf("%d %d %d", &n, &m, &l);
	
	for (i = 0; i < n; i++){
		for (j = 0; j < m; j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	for (i = 0; i < m; i++){
		for (j = 0; j < l; j++){
			scanf("%d", &b[i][j]);
		}
	}
	
	for (i = 0; i < n; i++){
		for (j = 0; j < l; j++){
			long long c = 0;
			for (k = 0; k < m; k++){
				c += a[i][k]*b[k][j];
			}
			if (j) printf(" ");
			printf("%lld", c);
		}
		printf("\n");
	}
	
	return 0;
}