#include <stdio.h>
 
#define MAX 101
#define INF 10000000
#define NIL -1
 
#define WHITE 0
#define BLACK 1 
 
int n;
int G[MAX][MAX];
 
void prim(void);
 
int main(){
 
  int i, j, k, u, v, w;
 
  scanf("%d", &n);
 
  for(i = 0; i < n; i++){ 
    for(j = 0; j < n; j++){
      G[i][j] = INF; 
    } 
  }
 
  for(i = 0; i < n; i++){     
    scanf("%d %d", &u, &k); 
    for(j = 0; j < k; j++){ 
      scanf("%d %d", &v, &w);
      G[u][v] = w; 
    } 
  }
 
  prim();
 
  return 0; 
}


void prim(){
 
  int u, v, mincost, i, sum;
  int d[MAX];
  int pi[MAX];
  int color[MAX];
 
  sum = 0;
 
  for(u = 0; u < n; u++){
    d[u] = INF;   
    pi[u] = NIL;
    color[u] = WHITE;
  }
 
  d[0] = 0;
  
  while(1){
    mincost = INF;
    for(i = 0; i < n; i++){
      if((color[i] != BLACK) && (d[i] < mincost)){
    mincost = d[i];
    u = i;
      }
    }
 
    if(mincost == INF)
      break;
    color[u] = BLACK;
    for(v = 0; v < n; v++){
      if(d[v] > d[u] + G[u][v]){
    d[v] = d[u] + G[u][v];
    pi[v] = u;
      }
    }
  }
 
  for(i = 0; i < n; i++)
    printf("%d %d\n", i, d[i]);
}