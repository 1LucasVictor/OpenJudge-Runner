#include <stdio.h>
#define N 100
#define WHITE 0
#define BLACK 1
#define NIL -1
#define INF 10000
int n;
int d[N],pi[N],color[N],G[N][N];
int prim(void){
  int mincost,u,v,i,weight=0;
  for(u=0;u<n;u++){
    d[u]=INF;
    pi[u]=NIL;
    color[u]=WHITE;
  }
  d[0]=WHITE;
  while(1){
    mincost=INF;
    for(i=0;i<n;i++){
      if(color[i]!=BLACK && d[i]<mincost){
	mincost=d[i];
	u=i;
      }
    }
    if(mincost==INF) break;
    color[u]=BLACK;
    for(v=0;v<n;v++){
      if(G[u][v]!=NIL){
	if(color[v]!=BLACK && G[u][v]<d[v]){
	  pi[v]=u;
	  d[v]=G[u][v];
	}
      }
    }
  }
  for(i=0;i<n;i++) weight+=d[i];
  return weight;
}
int main(){
  int i,j;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++) {
      scanf("%d",&G[i][j]);
    }
  }
  printf("%d\n",prim());
  return 0;
}