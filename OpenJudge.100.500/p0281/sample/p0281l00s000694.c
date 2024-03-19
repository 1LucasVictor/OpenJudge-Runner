#include<stdio.h>
#define MAX 101
#define INF 1000000
#define NIL -1
#define WHITE 0
#define GRAY 1
#define BLACK 2
int n,G[MAX][MAX];
void dijkstra();
int main(){
  int i,j,u,v,c,m;
  scanf("%d",&n);
  for(i=0;i<n;i++){
  scanf("%d %d",&u,&m);
  for(j=0;j<m;j++){
    scanf("%d %d",&v,&c);
    G[i][v]=c;
  }
  }
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(G[i][j]==0) G[i][j]=NIL;
    }
  }
  dijkstra();
  return 0;
}

void dijkstra(){
  int i,u,mincost,color[MAX],d[MAX],pi[MAX];
  for(i=0;i<n;i++){
    d[i]=INF;
    pi[i]=NIL;
    color[i]=WHITE;
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
    for(i=0;i<n;i++){
      if(G[u][i]!=NIL && color[i]!=BLACK && (G[u][i]+d[u])<d[i]){
	pi[i]=u;
	d[i]=G[u][i]+d[u];
      }
    }
  }
  for(i=0;i<n;i++){
    printf("%d %d\n",i,d[i]);
  }
}

