#include <stdio.h>
#include <limits.h>
#define N 100
#define WHITE 0
#define GRAY 1
#define BLACK 2
#define NIL -1
#define INF INT_MAX -1
int G[N][N];
int d[N],pi[N],color[N];
int n;
void dijkstra(void){
  int i,u,v,mincost;
  for(u=0;u<n;u++){
    d[u]=INF;
    pi[u]=NIL;
    color[u]=WHITE;
  }
  d[0]=0;
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
      if(color[v]!=BLACK && G[u][v]!=INF){
	if(d[u]+G[u][v]<d[v]){
	  d[v]=d[u]+G[u][v];
	  pi[v]=u;
	  color[v]=GRAY;
	}
      }
    }
  }
}
int main(){
  int i,j,k,u,v;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
      G[i][j]=INF;
  for(i=0;i<n;i++){
    scanf("%d%d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d",&v);
      scanf("%d",&G[u][v]);
    }
  }
  dijkstra();
  for(i=0;i<n;i++) printf("%d %d\n",i,d[i]);
  return 0;
}