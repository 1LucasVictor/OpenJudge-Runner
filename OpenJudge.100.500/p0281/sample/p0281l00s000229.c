#include <stdio.h>
#define MAX 100
#define WHITE 0
#define GRAY 1
#define BLACK 2
#define INF 50000

int n, M[MAX][MAX];

void dijkstra(){
  int minv=0, i, u=0, v;
  int d[MAX], color[MAX];

  for(i=0; i<n; i++){
    d[i] = INF;
    color[i] = WHITE;
  }

  d[0] = 0;
  color[0] = GRAY;
  while(1){
    minv = INF;
    u = -1;
    for(i=0;i<n;i++){
      if(minv>d[i] && color[i]!=BLACK){
        u = i;
        minv = d[i];
      }
    }
    if(u==-1) break;
    color[u] = BLACK;
    for(v=0; v<n; v++){
      if(color[v]!=BLACK && M[u][v]!=INF){
        if(d[v]>d[u]+M[u][v]){
          d[v] = d[u] + M[u][v];
          color[v] = GRAY;
        }
      }
    }
  }
  for(i=0; i<n; i++){
    printf("%d  %d\n", i, d[i] == INF ? -1 : d[i]);
  }
}

int main(){
  int i, j, k=0, c=0, u=0, v=0;

  scanf("%d", &n);
  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      M[i][j] = INF;
    }
  }
  for(i=0; i<n; i++){
    scanf("%d%d", &u, &k);
    for(j=0; j<k; j++){
      scanf("%d%d", &v, &c);
      M[u][v] = c;
    }
  }
  dijkstra();

  return 0;
}