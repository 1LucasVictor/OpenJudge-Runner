#include <stdio.h>
#define N 100
#define INFINITY 1000000
#define WHITE 0
#define BLACK 1
#define GRAY 2
void dijkstra();

int n;
float G[N][N];

int main(){
  int i,j,u,k,v,c;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      G[i][j] = INFINITY;
    }
  }
  for(i=0;i<n;i++){
    scanf("%d%d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d%d",&v,&c);
      G[u][v] = c;
    }
  }
  dijkstra();
  return 0;
}

void dijkstra(){
  int i,j,u,v,mincost;
  int d[N],color[N];

  for(i=0;i<n;i++){
    d[i] = INFINITY;
    color[i] = WHITE;
  }
  d[0] = 0;
  color[0] = GRAY;
  while(1){
    mincost = INFINITY;
    for(i=0;i<n;i++){
      if(color[i] != BLACK && d[i] < mincost){
	mincost = d[i];
	u = i;
      }
    }
    if(mincost == INFINITY) break;
    color[u] = BLACK;
    for(v=0;v<n;v++){
      if(color[v] != BLACK && G[u][v] != INFINITY){
	if( (d[u]+G[u][v]) < d[v]){
	  d[v] = d[u] + G[u][v];
	  color[v] = GRAY;
	}
      }
    }
  }
  for(i=0;i<n;i++){
    if(d[i] != INFINITY)
    printf("%d %d\n",i,d[i]);
  }
}

