#include <stdio.h>
#define N 100
#define INF 200000
#define WHITE 0
#define GRAY 1
#define BLACK 2

int G[N][N], n;

void dijkstra(void) {
  int d[N], color[N];
  int i, u, mincost;

  for(i = 0; i < n; i++) {
    d[i] = INF;
    color[i] = WHITE;
  }
  d[0] = 0;

  while(1){
    mincost = INF;
    for(i = 0; i < n; i++) {
      if(color[i] != BLACK && d[i] < mincost){
        mincost = d[i];
        u = i;
      }
    }
    if(mincost == INF) break;
    color[u] = BLACK;
    for(i = 0; i < n; i++) {
      if(color[i] != BLACK && G[u][i] != INF && d[u] + G[u][i] < d[i]) {
        d[i] = d[u] + G[u][i];
      }
    }
  }
  for(i = 0; i < n; i++) {
    printf("%d %d\n", i, d[i]);
  }
}

int main(){
  int i, j, u, v, k, c;

  scanf("%d",&n);
  for(i = 0; i < n; i++) {
    for(j = 0; j < n; j++) {
      G[i][j] = INF;
    }
  }

  for(i = 0; i < n; i++) {
    scanf("%d", &u);
    scanf("%d", &k);
    for(j = 0; j < k; j++) {
      scanf("%d", &v);
      scanf("%d", &c);
      G[u][v] = c;
    }
  }
  dijkstra();
  return 0;
}