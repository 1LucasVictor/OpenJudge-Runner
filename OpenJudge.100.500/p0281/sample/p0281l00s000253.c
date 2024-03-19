#include<stdio.h>
#define N 2000
#define INF 9999999
#define NIL -1 

int G[N][N], n, k, s, u, v;

void dijkstra(){

  int i, j, color[N], mincost, d[N], pi[N];
  
  for(u =0 ; u < n ; u++){
    d[u] = INF;
    pi[u] = NIL;
    color[u] = 0;
  }
  d[0] = 0;
  
  while(1){
    mincost = INF;
    for(i = 0 ; i < n ; i++){
      if(color[i] != 1 && d[i] < mincost){
	mincost = d[i];
	u = i;
      }
    }
    if(mincost == INF){
      break;
    }
    color[u] = 1;
    for(v = 0 ; v < n ; v++){
      if(color[v] != 1 && d[u] + G[u][v] < d[v] && G[u][v] != -1){
	pi[v] = u;
	d[v] = d[u] + G[u][v];
      }
    }
  }

  for(i = 0 ; i < n ; i++){
    if(d[i] != INF){
      printf("%d %d\n", i, d[i]);
    }
  }
  
}

int main(){

  int i, j;

  scanf("%d", &n);
  for(i = 0 ; i < n ; i++){
    for(j = 0 ; j < n ; j++){
      G[i][j] = INF;
    }
  }
  
  for(i = 0 ; i < n ; i++){
    scanf("%d%d", &u, &k);
    for(j = 0 ; j < k ; j++){
      scanf("%d", &v);
      scanf("%d", &G[u][v]);
    }
  }

  dijkstra();

  return 0;
}