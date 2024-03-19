#include <stdio.h>

#define WHITE 0
#define BLACK 1
#define INF 100000

void prim(void);

int n, d[100], color[100], pi[100], w[100][100];

int main(int argc, char const *argv[]) {
  int i,j;

  scanf("%d", &n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d", &w[i][j]);
    }
  }

  prim();

  return 0;
}

void prim(){
  int i,j,v,u,mincost,r=0,sum=0;

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
      if(color[v] != BLACK && w[u][v] < d[v] && w[u][v] > -1){
        pi[v] = u;
        d[v] = w[u][v];
      }
    }
  }
  for(i=0;i<n;i++) if(pi[i]!=-1) sum+=w[i][pi[i]];
  printf("%d\n",sum);
}