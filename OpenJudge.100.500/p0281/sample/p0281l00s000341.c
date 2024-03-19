#include <stdio.h>
#include <limits.h>

#define WHITE 1
#define BLACK 2
#define NIL -2

int G[101][101], pi[101],  d[101], n;

void dijkstra(){
  int mincost, u, v, i;
  int color[n];

  for(u=0; u<n; u++){
    d[u] = INT_MAX;
    pi[u] = NIL;
    color[u] = WHITE;
  }

  d[0] = 0;

  while(1){
    mincost = INT_MAX;
    for(i=0; i<n; i++){
      if(color[i] != BLACK && d[i] < mincost){
	mincost = d[i];
	u = i;
      }
    }
    
    if(mincost == INT_MAX){
      break;
    }

    color[u] = BLACK;
    
    for(v=0; v<n; v++){
      if(color[v] != BLACK && d[u] + G[u][v] < d[v]){
	pi[v] = u;
	d[v] = G[u][v] + d[u];
      }
    }

  }

}  

  
int main(){
  int i, j, k, u, v, c, sum=0;

  scanf("%d", &n);

  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      G[i][j] = 999999;
    }
  }

  for(i=0; i<n; i++){
    scanf("%d%d", &u, &k);
    for(j=0; j<k; j++){
      scanf("%d%d", &v, &c);
      G[u][v] = c;
    }
  }

  dijkstra();

  for(i=0; i<n; i++){
    printf("%d %d\n", i, d[i]);
  } 

  return 0;
}