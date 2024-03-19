#include<stdio.h>
#define N 100
#define WHITE 0
#define GRAY 1
#define BLACK 2
void init(void);
void print(void);
void bfs(int);
int n, it, d[N], que[N], color[N], graph[N][N];

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

	bfs(0);
	print();

	return 0;
}
void bfs(int u) {
	int i, v;
	color[u] = GRAY;
	que[++it] = u;
	d[u] = 0;

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
	it = -1;
	for (i = 0; i < n; i++) {
		color[i] = WHITE;
		for (j = 0; j < n; j++) {
			graph[i][j] = 0;
		}
	}
	return ;
}
void print(void) {
	int i;
	for (i = 0; i < n; i++) {
		printf("%d %d\n", i + 1, d[i]);
	}
	return ;
}