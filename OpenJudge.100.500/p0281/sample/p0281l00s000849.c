#include <stdio.h>
#define N 100
#define NIL -1
#define INF 10000

int G[N][N];
int d[N];
int n;

void dijkstra(int r) {
	int i,u;
	int mincost;
	char color[N];

	for(i=0;i<n;i++){
		d[i] = INF;
		color[i] = 'W';
	}

	d[r] = 0;

	while(1) {
		mincost = INF;
		for (i=0;i<n;i++) {
			if (color[i] != 'B' && d[i] < mincost) {
				mincost = d[i];
				u = i;
			}
		}

		if (mincost == INF) break;

		color[u] = 'B';

		for (i=0;i<n;i++) {
			if(color[i] != 'B' && d[u] + G[u][i] < d[i] && G[u][i] != INF) {
				d[i] = G[u][i] + d[u];
			}
		}
	}
}

int main() {
	int i,j;
	int u,k,v,c;

	scanf("%d", &n);
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			G[i][j] = INF;
		}
	}

	for(i=0;i<n;i++) {
		scanf("%d%d",&u,&k);
		for(j=0;j<k;j++) {
			scanf("%d%d",&v,&c);
			G[u][v] = c;
		}
	}

	dijkstra(0);

	for(i=0;i<n;i++) {
		printf("%d %d\n",i,d[i]);
	}

	return 0;
}