#include<stdio.h>
#define N 100
#define INF 1000
#define WHITE 0
#define GRAY 1
#define BLACK 2
void init(void);
void print(void);
void bfs(void);
int n, graph[N][N], d[N];

int main() {
	int i, j, l, m, in;

	init();

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d%d", &l, &m);
		for (j = 0; j < m; j++) {
			scanf("%d", &in);
			graph[l - 1][in - 1] = 1;
		}
	}

	bfs();
	print();

	return 0;
}
void bfs(void) {
	int i, v;
	int it, que[N], color[N];

	it = -1;
	for (i = 0; i < n; i++) {
		d[i] = INF;
		color[i] = WHITE;
	}

	color[0] = GRAY;
	que[++it] = 0;
	d[0] = 0;

	while (it >= 0) {
		v = que[it--];
		for (i = 0; i < n; i++) {
			if (graph[v][i] == 1 && color[i] == WHITE) {
				color[i] = GRAY;
				que[++it] = i;
				d[i] = d[v] + 1;
			}
		}
		color[v] = BLACK;
	}
}
void init(void) {
	int i, j;

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			graph[i][j] = 0;
		}
	}
	return ;
}
void print(void) {
	int i;
	for (i = 0; i < n; i++) {
		printf("%d ", i + 1);
		if (d[i] == INF) printf("-1\n");
		else			 printf("%d\n", d[i]);
	}
	return ;
}