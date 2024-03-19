#include <stdio.h>

int main()
{
	int n, u, k, v;
	int G[100][100] = {0};
	
	scanf("%d", &n);
	for(int i = 0; i < n; ++i)
	{
		scanf("%d %d", &u, &k);
		for(int j = 0; j < k; ++j)
		{
			scanf("%d", &v);
			G[u-1][v-1] = 1;
		}
	}
	
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < n - 1; ++j)
		{
			printf("%d ", G[i][j]);
		}
		printf("%d\n", G[i][n-1]);
	}
}

