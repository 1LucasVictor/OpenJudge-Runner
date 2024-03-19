#include <stdio.h>

#define INF 10000000
#define WHITE 0
#define GRAY 1
#define BLACK 2
#define MAX 100

void dijkstra(int);

int n,M[MAX][MAX],D[MAX],P[MAX],colr[MAX],mincost;

int main(){
  int i,j,u,k,v;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      M[i][j] = INF;
    }
  }

  for(i=0;i<n;i++){
    scanf("%d %d",&u,&k);
  
    for(j=0;j<k;j++){
      scanf("%d",&v);
      scanf("%d",&M[u][v]);
    }
  }

  dijkstra(0);
  
  return 0;
}

void dijkstra(int x){
  int i,u,v;

  for(u=0;u<n;u++){
    colr[u] = WHITE;
    D[u] = INF;
  }

  D[x] = 0;
  P[x] = -1;
  colr[x] = GRAY;
  
  while(1){
    mincost = INF;
    u = -1;
    for(i=0;i<n;i++){

      if(colr[i] != BLACK && D[i] < mincost){
        mincost = D[i];
        u = i;
      }
    }

    if(u == -1)break;

    colr[u] = BLACK;
    
    for(v=0;v<n;v++){
      if(colr[v] != BLACK && M[u][v] != INF){
        if(D[u] + M[u][v] < D[v]){
          D[v] = D[u] + M[u][v];
          P[v] = u;
          colr[v] = GRAY;
        }
      }
    }
  }

  for(i=0;i<n;i++){
    printf("%d %d\n",i,(D[i] == INF ? -1 : D[i]));
  }
}


