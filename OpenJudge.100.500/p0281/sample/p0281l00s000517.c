#include<stdio.h>

#define MAX 101
#define inf 1000000000
#define NIL -1000000000
#define WHITE 0
#define BLACK 1

int n;
int d[MAX],pi[MAX],color[MAX],G[MAX][MAX];

dijkstra(){
  int v,i,u,mincost;

  for(v=0;v<n;v++){
    d[v]=inf;
    pi[v]=NIL;
    color[v]=WHITE;
  }

  d[0]=0;

  while(1){
    mincost=inf;

    for(i=0;i<n;i++){
      if(color[i]!=BLACK && d[i]<mincost){
	mincost=d[i];
	u=i;
      }
    }
    if(mincost==inf) break;

    color[u]=BLACK;

    for(v=0;v<n;v++){
      if(G[u][v]!=-1){
	if(color[v]!=BLACK && d[u]+G[u][v]<d[v]){
	  pi[v]=u;
	  d[v]=d[u]+G[u][v];
	}
      }
    }
  }
}

int main(){
  int i,j,u,k,v,c;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      G[i][j]=inf;
    }
  }

  for(i=0;i<n;i++){
    scanf("%d%d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d%d",&v,&c);
      G[u][v]=c;
    }
  }

  dijkstra();

  for(i=0;i<n;i++){
    printf("%d %d\n",i,d[i]);
  }

  return 0;
}