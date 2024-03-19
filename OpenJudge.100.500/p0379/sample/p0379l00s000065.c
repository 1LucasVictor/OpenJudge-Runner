#include<stdio.h>
	int main()
{
	int b[100]={0}, c[100]={0}, a[100][100]={0}, m, n, i, j;
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
			c[i] += a[i][j];
		}
		c[i] += b[i];
	}
	
	for(i = 0; i < n; i++){
		printf("%d\n", c[i]);
	}
	return 0;
}