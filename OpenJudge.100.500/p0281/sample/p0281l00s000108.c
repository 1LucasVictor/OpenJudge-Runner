#include <stdio.h>

#define INF 10000000
#define NIL -1
#define BLACK 1
#define WHITE 0

void dijkstra(void);

int n,a[101][101],w=0,d[101],pi[101],color[101];

int main()
{
  int i,j,u,k,v;


  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      a[i][j]=-1;
    }
  }

  for(i=0;i<n;i++){

    scanf("%d",&u); //頂点の番号
    scanf("%d",&k); //出次数

    for(j=0;j<k;j++){
      scanf("%d",&v);
      scanf("%d",&a[u][v]);
    }
  }

  dijkstra();

  for(i=0;i<n;i++){
    printf("%d %d\n",i,d[i]);
  }

  return 0;
}

void dijkstra(void){
  int mincost,u,v,i;

  for(u=0;u<n;u++){ // each u in G
    d[u] = INF;
    pi[u] = NIL;
    color[u] = WHITE;
  }

  d[0] = 0;

  while(1){
    mincost = INF;
    for(i=0;i<n;i++){ //each i in G
      if (color[i] != BLACK && d[i] < mincost){
	mincost = d[i];
	u = i;
      }
    }
    color[u] = BLACK;

    if(mincost == INF) break;

    for(v=0;v<n;v++){// each v in Adj[u]
      if(a[u][v]!=-1){
	if (color[v] != BLACK && a[u][v]+d[u] < d[v]){
	  pi[v] = u;
	  d[v] = d[u]+a[u][v];
	}
      }
    }
  }
}