// B : Single Source Shortest Path
#include <stdio.h>
#include <stdlib.h>
#define N 100
#define INF 10000000
#define WHITE 0
#define BLACK 1

int main() {
  int i, j;
  int n;
  int u, k, l;
  int m[N][N];
  int d[N];
  int color[N];
  int mincost;

  // input
  scanf("%d", &n);  // the number of vertices in G
  
    // initialization
  for(i = 0; i < n; i++) {
    for(j = 0; j < n; j++) {
      m[i][j] = -1;
    }
  }
  
  for(i = 0; i < n; i++) {
    scanf("%d", &u);  // id
    // adjacency matrix with weight
    scanf("%d", &k);  // degree
    for(j = 0; j < k; j++) {
      scanf("%d", &l);  // vertice
      scanf("%d", &m[u][l]);  // the weight of l
    }
  }

  // SSSP
  // initialization
  for(i = 0; i < n; i++) {
    d[i] = INF;
    color[i] = WHITE;
  }
  // Dijkstra's Algorithm
  d[0] = 0;
  while(1) {
    mincost = INF;
    for(i = 0; i < n; i++) {
      if((color[i] != BLACK)&&(d[i] < mincost)) {
	mincost = d[i];
	u = i;
      }
    }
    if(mincost == INF) break;
    color[u] = BLACK;
    for(j = 0; j < n; j++) {
      if((color[j] != BLACK)&&(d[u] + m[u][j] < d[j]) && (m[u][j] != -1)) {
	d[j] = d[u] + m[u][j];
      }
    }
  }

  // output
  for(i = 0; i < n; i++) {
    printf("%d %d\n", i, d[i]);
  }

  return 0;
}

