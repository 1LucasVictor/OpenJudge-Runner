#include <stdio.h>

#define INF 1000000000

#define min(x, y) ((x) < (y) ? (x) : (y))

int adj[100][100];

int main(void) {
	int i, j, k;
	int n;

	scanf("%d", &n);

	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			adj[i][j] = INF;
	for (i = 0; i < n; i++)
		adj[i][i] = 0;

	for (i = 0; i < n; i++) {
		int u, k;
		scanf("%d %d", &u, &k);
		for (j = 0; j < k; j++) {
			int v, c;
			scanf("%d %d", &v, &c);
			adj[u][v] = c;
		}
	}

	for (k = 0; k < n; k++)
		for (i = 0; i < n; i++)
			for (j = 0; j < n; j++)
				adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);

	for (i = 0; i < n; i++)
		printf("%d %d\n", i, adj[0][i]);

	return 0;
}