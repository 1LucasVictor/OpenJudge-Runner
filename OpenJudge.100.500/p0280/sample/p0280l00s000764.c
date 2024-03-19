#include <stdio.h>          // printf(), scanf()
#include <stdbool.h>

#define MAX_V 100
#define min(a, b) ((a) < (b) ? (a) : (b))

const int INF = 100000000;
int cost[MAX_V][MAX_V];
int V;

int
prim()
{
	int mincost[MAX_V];
	bool used[MAX_V];
	int u, v;
	int i;

	for (i = 0; i < V; ++i)
	{
		mincost[i] = INF;
		used[i] = false;
	}

	int res = 0;
	mincost[0] = 0;
	while (true)
	{
		v = -1;
		for (u = 0; u < V; ++u)
		{
			if (!used[u] && (v == -1 || mincost[u] < mincost[v]))
				v = u;
		}

		if (v == -1)
			break;

		used[v] = true;
		res += mincost[v];
		for (u = 0; u < V; ++u)
			mincost[u] = min(mincost[u], cost[v][u]);
	}

	return res;
}

int
main(int argc, char** argv)
{
	int c;
	int i, j;

	scanf("%d", &V);
	for (i = 0; i < V; ++i)
	{
		for (j = 0; j < V; ++j)
		{
			scanf("%d", &c);
			cost[i][j] = (c != -1) ? c : INF;
		}
	}

	printf("%d\n", prim());
	return 0;
}

