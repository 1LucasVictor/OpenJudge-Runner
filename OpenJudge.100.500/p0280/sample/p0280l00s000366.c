#include <stdio.h>
#define N 101
#define WHITE 0
#define GRAY 1
#define BLACK 2
#define INF 2010
#define NIL -1

int G[N][N];
int n;

int prim(void) {
  int i, mincost, u, num = 0;
  int d[N], pi[N], color[N];

  for(i = 1; i <= n; i++) {
    d[i] = INF;
    pi[i] = NIL;
    color[i] = WHITE;
  }
  d[1] = 0;
  while(1) {
    mincost = INF;
    for(i = 1; i <= n; i++) {
      if(color[i] != BLACK && d[i] < mincost) {
        mincost = d[i];
        u = i;
      }
    }
    if(mincost == INF) break;
    color[u] = BLACK;
    for(i = 1; i<= n; i++) {
      if(G[u][i] != -1) {
        if(color[i] != BLACK && G[u][i] < d[i]) {
          pi[i] = u;
          d[i] = G[u][i];
        }
      }
    }
  }
  for(i = 1; i <= n; i++) {
    num += d[i];
  }
  return num;
}

int main() {
  int i, j, k;

  scanf("%d", &n);
  for(i = 1; i <= n; i++) {
    for(j = 1; j <= n; j++) {
      scanf("%d", &G[i][j]);
    }
  }
  k = prim();
  printf("%d\n", k);

  return 0;
}