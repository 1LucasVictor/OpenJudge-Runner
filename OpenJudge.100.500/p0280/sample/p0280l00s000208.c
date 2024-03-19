#include<stdio.h>
#define M 100
#define NIL -1
#define WHITE 1
#define BLACK 0

int G[M][M];
int n;
int INFTY = 1<<21;
int prim();

int main(){
  int i;
  int j;
  int x;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&x);
      if(x == -1) G[i][j] = INFTY;
      else G[i][j] = x;
    }
  }
  printf("%d\n",prim());
  return 0;
}

int prim(){
  int u,mincost,i,v,sum=0;
  int color[M],d[M],pi[M];

  for(u=0;u<n;u++){
    d[u] = INFTY;
    pi[u] = NIL;
    color[u] = WHITE;
  }
  d[0] = 0;
  
  while(1){
    mincost = INFTY;
    for(i=0;i<n;i++){
      if(color[i] != BLACK && d[i] < mincost){
	mincost = d[i];
	u = i;
      }
    }
    if(mincost == INFTY) break;
    color[u] = BLACK;
    for(v=0;v<n;v++){
      if(color[v] != BLACK && G[u][v] < d[v]){
	pi[v] = u;
	d[v] = G[u][v];
      }
    }
  }
  for(i=0;i<n;i++){
    if(pi[i] != -1) sum += G[i][pi[i]];
  }
  return sum;
}

