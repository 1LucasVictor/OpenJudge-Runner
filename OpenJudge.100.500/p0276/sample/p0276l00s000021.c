#include <stdio.h>

int adj[100][100];

int main(void) {
	int i, j;
	int n;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		int u, k;

		scanf("%d %d", &u, &k);
		u--;

		for (j = 0; j < k; j++) {
			int v;

			scanf("%d", &v);
			v--;

			adj[u][v] = 1;
		}
	}

	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			printf("%d%c", adj[i][j], " \n"[j == n - 1]);

	return 0;
}