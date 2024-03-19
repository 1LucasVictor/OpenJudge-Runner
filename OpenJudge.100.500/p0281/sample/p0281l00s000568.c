#include<stdio.h>
#include<math.h>


#define N 100
#define INFTY 10000000
#define WHITE 0
#define GRAY 1
#define BLACK 2

void dijkstra(int,int*);

int M[N][N];

int main(void){
  int n,d[N];
  int u,k,v;
  int i,j;

  scanf(" %d",&n);

  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      M[i][j] = INFTY;
    }
  }
  
  for(i = 0; i < n; i++){
    scanf(" %d %d",&u,&k);
    for(j = 0; j < k; j++){
      scanf(" %d",&v);
      scanf(" %d",&M[u][v]);
    }
  }

  dijkstra(n,d);

  for(i = 0; i < n; i++){
    if(d[i] == INFTY){
      printf("%d %d\n",i,-1);
    }
    else{
      printf("%d %d\n",i,d[i]);
    }
  }
  
  return 0;
}

void dijkstra(int n, int *d){
  int mincost,color[N],p[N];
  int i,v,u=0;

  for(i = 0; i < n; i++){
    color[i] = WHITE;
    d[i] = INFTY;
  }

  d[0] = 0;
  p[0] = -1;

  while(1){
    mincost = INFTY;
    for(i = 0; i < n; i++){
      if(color[i] != BLACK && d[i] < mincost){
	mincost = d[i];
	u = i;
      }
    }

    if(mincost == INFTY) break;

    color[u] = BLACK;
    
    for(v = 0; v < n; v++){
      if(color[v] != BLACK && M[u][v] != -1){
	if(d[u]+M[u][v] < d[v]){
	  d[v] = d[u] + M[u][v];
	  p[v] = u;
	  color[v] = GRAY;
	}
      }
    }
  }
}

