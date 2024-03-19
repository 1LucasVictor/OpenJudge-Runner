#include <stdio.h>
#include <stdlib.h>
#define INF (1<<28)

int mst(int g[101][101], int n) {
  int i;
  int res;
  int *cost, *vis;
  cost = (int*)malloc(sizeof(int)*n);
  vis = (int*)malloc(sizeof(int)*n);
  for(i = 0; i < n; ++i) {
    cost[i] = INF;
    vis[i] = 0;
  }
  cost[0] = 0;
  res = 0;
  while(1) {
    int id = -1;
    int mini = INF;
    for(i = 0; i < n; ++i) {
      if(vis[i]) continue;
      if(cost[i] < mini) {
        id = i;
        mini = cost[i];
      }
    }
    if(id == -1) break;
    vis[id] = 1;
    res += cost[id];

    for(i = 0; i < n; ++i) {
      if(vis[i]) continue;
      if(g[id][i] < cost[i]) {
        cost[i] = g[id][i];
      }
    }
  }

  free(cost);
  free(vis);
  return res;
}

int main() {
  int i, j;
  int n;
  int g[101][101];
  scanf("%d", &n);
  for(i = 0; i < n; ++i) {
    for(j = 0; j < n; ++j) {
      scanf("%d", &g[i][j]);
      if(g[i][j] == -1) g[i][j] = INF;
    }
  }
  printf("%d\n", mst(g,n));
}