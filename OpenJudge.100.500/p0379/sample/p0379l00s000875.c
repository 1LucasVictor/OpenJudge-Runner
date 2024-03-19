#include <stdio.h>

int main(void)
{
	int n, m, i, j, x, A[100][100], b[100], c;
	
	scanf("%d%d%*c", &n, &m);
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			scanf("%d", &x);
			A[i][j] = x;
		}
	}
	for(j = 0; j < m; j++){
		scanf("%d", &x);
		b[j] = x;
	}
	
	for(i = 0; i < n; i++){
		c = 0;
		for(j = 0; j < m; j++){
			c += (A[i][j] * b[j]);
		}
		printf("%d\n", c);
	}
	
	return(0);
}

