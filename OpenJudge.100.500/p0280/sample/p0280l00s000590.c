#include<stdio.h>
#define N 100
#define INF 10000
#define WHITE 0
#define BLACK 1
int G[N][N];
int n;

int prim(){
  int i,u,v,d[N],pi[N],color[N];
  int c,mincost;
  for(i=0;i<n;i++){
    d[i]=N;
    pi[i]=-1;
    color[i]=WHITE;
  }
  while(1){ 
    mincost = INF;
    for(i=0;i<n;i++){
      if (color[i] != BLACK && d[i] < mincost){
	mincost = d[i];
	u = i;
      }
    }
    if (mincost == INF)
      break;
    color[u] = BLACK;
    for (v=0;v<n;v++){
      if (color[v] != BLACK && G[u][v] < d[v] && G[u][v]!=-1){
	pi[v] = u;
	d[v] = G[u][v];
      }
    }
  }
  c=0;
  for(i=0;i<n;i++)
    c+=G[i][pi[i]];
  return c;
}
  
int main(){
  int i,j,pr;
  int d[N],pi[N],color[N];
  scanf("%d",&n);
  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
      scanf("%d",&G[i][j]);
  pr=prim();
  printf("%d\n",pr);
  return 0;
}