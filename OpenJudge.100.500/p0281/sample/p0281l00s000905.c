#include<stdio.h>
#define MAX 103
#define INF 1000000
#define NIL -1
#define WHITE 0
#define BLACK 1
#define GRAY 2

int n,G[MAX][MAX],d[MAX],mincost,color[MAX];

void initializeSingleSource(){
  int v;
  for( v = 0 ; v < n ; v++ ){
    d[v] = INF;
    color[v] = WHITE;
  }
  d[0] = 0;
}

void dijkstra(){
  int i,v,u;
  initializeSingleSource();

  while(1){
    mincost = INF;
    for( i = 0 ; i < n ;i ++ )
      {
	if( color[i] != BLACK && d[i] < mincost ){
	  mincost = d[i];
	  u = i;
	}
      }
    
    if( mincost == INF ) break;

    color[u] = BLACK;

    for( v = 0 ; v < n ; v++ ){
      if( color[v] != BLACK && G[u][v] != INF ){
	if(( d[u] + G[u][v] ) < d[v] ){
	  d[v] = d[u] + G[u][v];
	  //	  color[v] = GRAY;
	}
      }
    }


  }
}

int main(){
  int i,j,u,v,k,c;
  scanf("%d",&n);

  for( i = 0 ; i < n ; i++ )
    {
      for( j = 0 ; j < n ; j++ ) G[i][j] = INF;
    }
  
  for( i = 0 ; i < n ; i++ ){
    scanf("%d%d",&u,&k);
    for( j = 0 ; j < k ; j++ ){
      scanf("%d%d",&v,&c);
      G[u][v] = c;
    }
  }

  dijkstra();

  for( i = 0 ; i < n ; i++ )
    {
      if( d[i] != INF )
      printf("%d %d\n",i,d[i]);
    }
  
  return 0;
}