#include<stdio.h>
int main()
{
	int n,u,k,v,i,j;
	int G[100][100];

	scanf("%d",&n);

	for (i = 0; i < n; i++) {
		for (j = 0; j< n; j++) {
			G[i][j] = 0;
		}
	}

	for (i = 0; i < n; i++) {
		scanf("%d",&u);
		scanf("%d",&k);
		for (j = 0; j < k; j++) {
			scanf("%d",&v);
			G[u - 1][v - 1] = 1;
		}
	}

	for (i = 0; i < n; i++) {
              printf("%d",G[i][0]);
		for (j = 1; j < n ; j++) {
			printf(" %d",G[i][j]);
		}
		printf("\n",G[i][0]);
	}
	return 0;
}