#include<stdio.h>
#define N 100
#define INF 100001
#define WHITE 0
#define BLACK 1
typedef struct {
  int v[N];
  int c[N];
  int k,d,pi,color;
} Graph;
int n;
Graph g[N];

void dijkstra()
{
  int i,j,u,mincost;
  for(i=0; i<n; i++){
    g[i].d = INF;
    g[i].pi = -1;
    g[i].color = WHITE;
  }
  g[0].d = 0;

  while(1) {
    mincost = INF;
    for(i=0; i<n; i++) {
      if(g[i].color != BLACK && g[i].d < mincost) {
	mincost = g[i].d;
	u = i;
      }
    }

    if(mincost == INF) break;
    
    g[u].color = BLACK;
    for(i=0; i<n; i++) {
      for(j=0; j<g[i].k; j++) {
	if(g[i].v[j] == u) {
	  if(g[i].color != BLACK && g[i].c[j] + g[u].d < g[i].d) {
	    g[i].pi = u;
	    g[i].d = g[i].c[j] + g[u].d;
	  }
	}
      }
    }
  }
}

int main() 
{
  int i,j,u,ver,cost;
  scanf("%d",&n);
  for(i=0; i<n; i++) {
    scanf("%d%d",&u,&g[i].k);
    for(j=0; j<g[i].k; j++) {
      scanf("%d%d",&ver,&cost);
      g[u].v[j]=ver; g[u].c[j] = cost;
    }
  }

  dijkstra();
  for(i=0; i<n; i++) printf("%d %d\n",i,g[i].d);
  return 0;
}