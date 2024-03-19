#include <stdio.h>
#include <stdlib.h>

int **G;
int *u, *k, **v;
int n;

void input() {
	int i, j;

	scanf("%d", &n);

	k = (int *)malloc(sizeof(int) * (n + 1));
	u = (int *)malloc(sizeof(int) * (n + 1));
	G = (int **)malloc(sizeof(int *) * (n + 1));
	v = (int **)malloc(sizeof(int *) * (n + 1));

	for (i = 1; i <= n; i++) {
		scanf("%d%d", &u[i], &k[i]);
		G[i] = (int *)malloc(sizeof(int) * (n + 1));
		v[i] = (int *)malloc(sizeof(int) * (k[i] + 1));
		for (j = 1; j <= k[i]; j++) {
			scanf("%d", &v[i][j]);
		}
	}
}

void createAdjacencyMatrix(int a) {
	int i, j;
	for (i = 1; i <= k[a]; i++) {
		for (j = 1; j <= n; j++) {
			if (u[j] == v[a][i])
				G[a][u[j]] = 1;
		}
	}
}

void output() {
	int i, j;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			createAdjacencyMatrix(i);
			// if (j != 1) printf(" ");
			printf("%d", G[i][j]);
			if (j < n) printf(" ");
		}
		puts("");
		free(G[i]);
		free(v[i]);
	}
	free(u);
	free(k);
	free(G);
	free(v);
}

main () {

	input();
	output();

	return 0;
}