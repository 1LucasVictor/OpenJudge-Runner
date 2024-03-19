#include <stdio.h>

int main(void) {
	int n, m;
	int a[100][100];
	int b[100];
	int c = 0;
	int i, j;
	
	scanf("%d %d", &n, &m);
	
	for (i = 0; i < n+1; i++){
		for (j = 0; j < m; j++){
			if (i == n) scanf("%d", &b[j]);
			else scanf("%d", &a[i][j]);
		}
	}
	
	for (i = 0; i < n; i++){
		for (j = 0;j < m; j++){
			c += a[i][j]*b[j];
		}
		printf("%d\n", c);
		c = 0;
	}
	
	return 0;
}