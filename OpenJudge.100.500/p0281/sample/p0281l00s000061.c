#include <stdio.h>
#define MAX 110
#define INFTY 10000000
#define BLACK 0
#define GRAY 1
#define WHITE 2

int N;
int G[MAX][MAX];
int d[MAX];
int p[MAX];
int color[MAX];
int sum[MAX];

void dijk()
{
	int i, j, k, u, v, c;
	for (i = 0; i < N; i++) {
		color[i] = WHITE;
		d[i] = INFTY;
		p[i] = -1;
	}
	d[0] = 0;

	while (1)
	{
		int minCost = INFTY;
		for (i = 0; i < N; i++) {
			if (color[i] != BLACK && d[i] < minCost) {
				minCost = d[i];
				u = i;
			}
		}

		if (minCost == INFTY) {
			break;
		}

		color[u] = BLACK;
		
		for (i = 0; i < N; i++) {
			if (G[u][i] != INFTY && color[i] != BLACK) {
				if (d[u] + G[u][i] < d[i]) {
					color[i] = GRAY;
					d[i] = d[u] + G[u][i];
					p[i] = u;
				}
			}			
		}
	}
}


int main()
{
	int i, j, k, u, v, c;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			G[i][j] = INFTY;

	for (i = 0; i < N; i++) {
		scanf("%d", &u);
		scanf("%d", &k);
		for (j = 0; j < k; j++) {
			scanf("%d %d", &v, &c);
			G[u][v] = c;
		}
	}

	dijk();

	for (i = 0; i < N; i++) {
		printf("%d %d\n", i, d[i]);
	}

	return 0;
}