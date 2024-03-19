#include <stdio.h>

#define MAX 100

int main(void)
{
	int i, j, n, u, k, v, a[MAX+1][MAX+1]={0};
	
	scanf("%d",&n);
	
	for (i=0; i<n; i++) {
		scanf("%d %d", &u, &k);
		for (j=0; j<k; j++) {
			scanf("%d",&v);
			a[u][v] = 1;
		}
	}
	
	for (i=1; i<=n; i++) {
		for (j=1; j<=n-1; j++) {
			printf("%d ", a[i][j]);
			
		}
		printf("%d\n", a[i][n]);
	}
	
	return 0;
}