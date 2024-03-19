#include <stdio.h>
#include <stdlib.h>

typedef struct {int from, to, w;} Edge;

int parent[100], rank[100];
Edge edge[10000];

int compare(const void *a, const void *b) {
	return ((Edge *)a)->w - ((Edge *)b)->w;
}

void init(int n) {
	int i;
	for (i = 0; i < n; i++) {
		parent[i] = i;
		rank[i] = 0;
	}
}

int find(int x) {
	return parent[x] != x ? parent[x] = find(parent[x]) : x;
}

void unite(int x, int y) {
	const int xr = find(x), yr = find(y);
	if (rank[xr] < rank[yr])
		parent[xr] = yr;
	else if (xr != yr) {
		parent[yr] = xr;
		rank[xr] += rank[xr] == rank[yr];
	}
}

int kruskal(int v, int e) {
	int i;
	int sum;

	qsort(edge, e, sizeof(Edge), &compare);

	init(v);

	sum = 0;
	for (i = 0; i < e; i++)
		if (find(edge[i].from) != find(edge[i].to)) {
			unite(edge[i].from, edge[i].to);
			sum += edge[i].w;
		}

	return sum;
}

int main(void) {
	int i, j;
	int n;
	int e;

	scanf("%d", &n);

	e = 0;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++) {
			int a;
			scanf("%d", &a);
			if (a != -1)
				edge[e++] = (Edge){i, j, a};
		}

	printf("%d\n", kruskal(n, e));

	return 0;
}