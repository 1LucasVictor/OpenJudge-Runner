#include <stdio.h>
#include <stdlib.h>
#define N 100
#define INF 10000000
#define WHITE 0
#define BLACK 1
 
int main(){
  int i,j,n,count=0,v,c,v1,c1,u,mincost;
  int G[N][N],color[N],d[N],pi[N];
 
  for(i = 0;i < N;i++){
    for(j = 0;j < N;j++){
      G[i][j] = -1;
    }
  }
    scanf("%d",&n);
 
    for(i = 0;i < n;i++){
      scanf("%d%d",&v,&c);
      for(j = 0;j < c;j++){
    scanf("%d%d",&v1,&c1);
    G[v][v1] = c1;
      }
    }
 
    for(i = 0;i < n;i++){
      color[i] = WHITE;
      pi[i] = -1;
      d[i] = INF;
    }
 
    d[0] = 0;
 
    while(1){
      mincost = INF;
      for(i = 0;i < n;i++){
    if(color[i] != 2 && d[i] < mincost){
      mincost = d[i];
      u = i;
    }
      }
      if(mincost == INF) break;
      color[u] = 2;
 
      for(i = 0;i < n;i++){
    if(G[u][i] != -1 && color[i] != 2 && (G[u][i] + d[u]) < d[i]){
      pi[i]= u;
      d[i] = G[u][i] + d[u];
      color[i] = BLACK;
    }
      }
    }
 
    for(i = 0;i < n;i++){
      printf("%d %d\n",i,d[i]);
    } 
    return 0;
 
}