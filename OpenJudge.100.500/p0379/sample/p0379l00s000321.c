#include <stdio.h>
int main()
{
	int m, n, i, j;
	scanf("%d %d", &n, &m);
	int a[n][m], b[m];
	int c[n];
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			scanf("%d", &a[i][j]);
		}
		c[i]=0;
	}
	for(i=0; i<m; i++){
		scanf("%d", &b[i]);
	}
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			c[i]+=a[i][j]*b[j];
		}
		printf("%d\n", c[i]);
	}
	return 0;
}