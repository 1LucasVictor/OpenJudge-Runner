#include<stdio.h>
#define N 100
#define inf 1000000000
#define NIL -1
#define BLACK 2
#define GRAY 1
#define WHITE 0

int n,A[N][N];

void dijkstra(){
  int mincost,d[N],color[N],i,u,v;

  for(i = 0;i < n;i++) {
    d[i] = inf;
    color[i] = WHITE;
  }

  d[0] = 0;
  color[0] = GRAY;
  while(1) {
    mincost = inf;
    u = NIL;
    for(i = 0;i < n;i++) {
      if(mincost > d[i] && color[i] != BLACK) {
	u = i;
	mincost = d[i];
      }
    }
    if(u == NIL) break;
    color[u] = BLACK;
    for(v = 0;v < n;v++) {
      if(color[v] != BLACK && A[u][v] != inf) {
	if(d[v] > d[u] + A[u][v]) {
	  d[v] = d[u] + A[u][v];
	  color[v] = GRAY;
	}
      }
    }
  }

  for(i = 0;i < n;i++) {
    d[i] == inf ? -1 : d[i];
    printf("%d %d\n",i,d[i]);
  }
}

int main()
{
  int i,j,k,c,u,v;
  
  scanf("%d",&n);
  for(i = 0;i < n;i++) {
    for(j = 0;j < n;j++) {
      A[i][j] = inf;
    }
  }

  for(i = 0;i < n;i++) {
    scanf("%d%d",&u,&k);
    for(j = 0;j < k;j++) {
      scanf("%d%d",&v,&c);
      A[u][v] = c;
    }
  }

  dijkstra();

  return 0;
}
    


