#include <stdio.h>
  
#define min(a,b) ((a) < (b) ? (a) : (b))
#define MAX 100
#define INF 1000000000
  
int V;
int cost[MAX][MAX];
int mincost[MAX];
int used[MAX];
  
int prim() {
  int i,res,v,u;
  
  for (i = 0 ; i < V ; i++) {
    mincost[i] = INF;
    used[i] = 0;
  }
  
  mincost[0] = 0;
  res = 0;
  
  while (1) {
    v = -1;
  
    for (u = 0 ; u < V ; u++) {
      if (!used[u] && (v == -1 || mincost[u] < mincost[v])) {
    v = u;
      }
    }
  
    if (v == -1) {
      break;
    }
    used[v] = 1;
    res += mincost[v];
  
    for (u = 0 ; u < V ; u++) {
      if (cost[v][u] != -1) {
    mincost[u] = min(mincost[u],cost[v][u]);
      }
    }
  
  }
  
  return res;
}
  
int main() {
  int i,j;
    
  scanf("%d" ,&V);
  for (i = 0 ; i < V ; i++) {
    for (j = 0 ; j < V ; j++) {
      scanf("%d" ,&cost[i][j]);
    }
  }
  
  printf("%d\n" ,prim());
  
  return 0;
}