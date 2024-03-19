#include <stdio.h>

#define WHITE 0
#define BLACK 1
#define INF 10000000

void dijkstra(void);

void prim(void);

int n, d[100], color[100], pi[100], w[100][100];

int main(int argc, char const *argv[]) {
  int i,j,u,k,v,c;

  scanf("%d", &n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      w[i][j] = -1;
    }
  }

  for(i=0;i<n;i++){
    scanf("%d%d", &u,&k);
    for(j=0;j<k;j++){
      scanf("%d%d", &v,&c);
      w[u][v] = c;
    }
  }

  dijkstra();

  return 0;
}

void dijkstra(){
  int i,j,v,u,mincost,r=0;

  for(i=0;i<n;i++){
    d[i] = INF;
    pi[i] = -1;
    color[i] = WHITE;
  }

  d[r] = 0;

  while (1) {
    mincost = INF;
    for(i=0;i<n;i++){
      if(color[i] != BLACK && d[i] < mincost){
        mincost = d[i];
        u = i;
      }
    }

    if(mincost == INF) break;

    color[u] = BLACK;

    for(v=0;v<n;v++){
      if(color[v] != BLACK && d[u]+w[u][v] < d[v] && w[u][v] > -1){
        pi[v] = u;
        d[v] = w[u][v] + d[u];
      }
    }
  }
  for(i=0;i<n;i++) printf("%d %d\n",i,d[i]);
}