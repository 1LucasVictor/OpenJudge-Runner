#include <stdio.h>
#define MAX 100
#define INF 200000

int n, U[MAX][MAX];
void dijkstra();

int main(){
  int i, j, u, k, v, m;
  scanf("%d",&n);
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      U[i][j] = INF;
    }
  }

  for(i = 0; i < n; i++){
    scanf("%d%d",&u,&k);
    for(j = 0; j < k; j++){
      scanf("%d%d",&v,&m);
      U[u][v] = m;
    }
  }
  dijkstra();

  return 0;
}

void dijkstra(){
  int i, u, v, d[MAX], color[MAX], min;
  for(i = 0; i < n; i++){
    d[i] = INF;
    color[i] = 0;
  }
  d[0] = 0;
  color[0] = 1;
  while(1){
    u = -1;
    min = INF;
    for(i = 0; i < n; i++){
      if(color[i] != 2 && min > d[i]){
        u = i;
        min = d[i];
      }
    }
    if(u == -1) break;
    color[u] = 2;

    for(v = 0; v < n; v++){
      if(color[v] != 2 && U[u][v] != -1){
        if(d[v] > d[u] + U[u][v]){
          color[v] = 1;
          d[v] = d[u] + U[u][v];
        }
      }
    }
  }

  for(i = 0; i < n; i++) printf("%d %d\n",i, d[i]);
}