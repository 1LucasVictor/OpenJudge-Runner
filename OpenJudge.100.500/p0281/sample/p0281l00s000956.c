// Single_Source_Shortest_Path_I.c

#include <stdio.h>

#define MAX 100000000
#define N 100

void DFS(int, int);

int n, size[N], m[N][N], count[N][N], d[N];

int main() {

	int i, j, u;

	scanf("%d", &n);

	for(i = 0; i < n; i++) {
		
		scanf("%d", &u);
		scanf("%d", &size[u]);

		for(j = 0; j < size[u]; j++) {

			scanf("%d", &m[u][j]);
			scanf("%d", &count[u][j]);

		}

	}

	for(i = 0; i < n; i++) {
		d[i] = MAX;
	}

	DFS(0, 0);

	for(i = 0; i < n; i++) {
		printf("%d %d\n", i, d[i]);
	}

	return 0;
}


void DFS(int p, int q) {

	int i;

	d[p] = q;

	for(i = 0; i < size[p]; i++) {
		if(d[m[p][i]] > q + count[p][i]) {
			DFS(m[p][i], q + count[p][i]);
		}
	}

}