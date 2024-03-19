#include <stdio.h>
#include <limits.h>
int main(){
  int n, G[100][100], d[100], pi[100], color[100];
  int i, j, u, k, v, c, mincost, sum = 0;
 
  scanf("%d", &n);
 
  for(i = 0; i < n; i++) for(j = 0; j < n; j++) G[i][j] = -1;
 
  for(i = 0; i < n; i++){
    d[i] = INT_MAX;
    pi[i] = 0;
    color[i] = 0;
    scanf("%d%d", &u, &k);
    for(j = 0; j < k; j++){
      scanf("%d%d", &v, &c);
      G[u][v] = c;
    }
  }
 
  d[0] = 0;
 
  while(1){
    mincost = INT_MAX;
    for(i = 0; i < n; i++){
      if(color[i] != 1 && d[i] < mincost){
    mincost = d[i];
    u = i;
      }
    }
    if(mincost == INT_MAX) break;
    color[u] = 1;
    for(i = 0; i < n; i++){
      if(G[u][i] != -1 && color[i] != 1 && d[u] + G[u][i] < d[i]){
    pi[i] = u;
    d[i] = G[u][i];
    d[i] += d[pi[i]];
      }
    }
  }
 
  for(i = 0; i < n; i++) printf("%d %d\n", i, d[i]);
  return 0;
}