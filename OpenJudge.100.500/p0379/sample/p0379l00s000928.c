#include <stdio.h>

int main( void )
{
	int i, j, n, m, a[100][100], b[100], c[100] = { 0 };
	
	scanf("%d %d", &n, &m);
	
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	for(i = 0; i < m; i++){
		scanf("%d", &b[i]);
	}
	
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			c[i] += a[i][j] * b[j];
		}
	}
	
	for(i = 0; i < n; i++){
		printf("%d\n", c[i]);
	}

	return 0;
}