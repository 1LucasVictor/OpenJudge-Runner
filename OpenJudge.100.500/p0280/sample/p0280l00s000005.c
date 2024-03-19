#include<stdio.h>

#define inf 10000
#define NIL -1
#define WHITE 1
#define BLACK 2
#define N 101

int color[N],G,w[N][N],d[N],pi[N];

void prim(void);
int main(){
  int i,j,cost=0;
  scanf("%d",&G);
  for(i=0;i<G;i++){
    for(j=0;j<G;j++){
      scanf("%d",&w[i][j]);
    }
  }
  prim();
  for(i=1;i<G;i++){
    cost += d[i];
  // printf("%d\n",d[i]);
  }
  printf("%d\n",cost);
  return 0;
}

void prim(){
  int u,v,i,mincost;
  for(u=0;u<G;u++){
    d[u] = inf;
    pi[u] = NIL;
    color[u] = WHITE;
  }
  d[0] = 0;
  while(1){
    mincost = inf;
    for(i=0;i<G;i++){
      if(color[i] != BLACK && d[i] < mincost){
        mincost = d[i];
        u=i;
      }
    }
    if(mincost == inf){
      break;
    }
    color[u] = BLACK;
    for(v=0;v<G;v++){
      if(color[v] != BLACK && w[u][v] < d[v] && w[u][v]>=0){
        pi[v] = u;
        d[v] = w[u][v];
      }
    }
  }
}

