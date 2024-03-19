#include <stdio.h>
 
#define inf 200000
#define NIL -1000000
#define WHITE 9999999
#define BLACK 8888888
 
int prim(int, int(*)[], int[], int[], int[]);
 
int main(){
  int i,j,n,ans;
  scanf("%d", &n);
 
  int w[n][n];
  int d[n];
  int pi[n];
  int color[n];
 
  for(i = 0; i < n; i++)
    for(j = 0; j < n; j++)
      scanf("%d", &w[i][j]);
 
  ans = prim(n, w, d, pi, color);
  printf("%d\n", ans);
  return 0;
}
 
int prim(int n, int w[n][n], int d[n], int pi[n], int color[n]){
  int i,j,u,ans = 0;
  int mincost;
  for(u = 0; u < n; u++){
    d[u] = inf;
    pi[u] = NIL;
    color[u] = WHITE;
  }
  d[0] = 0;
  while(1){
    mincost = inf;
    for(i = 0; i < n; i++){
      if(color[i] != BLACK && d[i] < mincost){
        mincost = d[i];
        u = i;
      }
    }
    if(mincost == inf)
      break;
 
    color[u] = BLACK;
 
    for(j = 0; j < n; j++){
      if(color[j] != BLACK && w[u][j] < d[j] && w[u][j] != -1){
        pi[j] = u;
        d[j] = w[u][j];
      }
    }
  }
 
  for(i = 0; i < n; i++)
    ans += d[i];
 
  return ans;
}