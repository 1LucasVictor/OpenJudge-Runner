#include <stdio.h>
#define INF 1000000000
#define N 100
#define WHITE -1
#define GRAY 0
#define BLACK 1

int min_cost[N],Stamp[N],A[N][N],n;

void initialize(void){
  int i;
  for(i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      A[i][j] = INF;
    }
    Stamp[i] = WHITE;
    min_cost[i] = INF;
  }
}


void dijkstra(){
  int mincost,u;

  min_cost[0] = 0;
  Stamp[0] = GRAY;

  while(1){
    mincost = INF;
    for(int i = 0; i < n; i++){
      if(Stamp[i] != BLACK && min_cost[i] < mincost){
	mincost = min_cost[i];
	u = i;
      }
    }

    if(mincost == INF) break;

    Stamp[u] = BLACK;

    for(int v = 0; v < n; v++){
      if(Stamp[v] != BLACK && A[u][v] != INF){
	if((min_cost[u] + A[u][v]) < min_cost[v]){
	  min_cost[v] = min_cost[u] + A[u][v];
	  Stamp[v] = GRAY;
	}
      }
    }
  }

  for(int i = 0; i < n; i++){
    printf("%d %d\n",i,min_cost[i]);
  }
}

int main(){
  int i,j,u,k,c,v;

  initialize();

  scanf("%d",&n);
  for(i = 0; i < n; i++){
    scanf("%d%d",&u,&k);
    for(j = 0; j < k; j++){
      scanf("%d%d",&v,&c);
      A[u][v] = c;
    }
  }

  dijkstra();

  return 0;
}

