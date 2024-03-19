#include <stdio.h>
#define N 101
#define INF 0xffff
#define NIL 0

typedef enum {
  WHITE,
  BLACK,
} color_t;


int main(){
  int n, i, j, u ,k;
  int w[N][N]= {0}; // 0-origin w[u][v] : the weight of "node u -> node v"
  int adj[N][N];  // adj[u][i] : the adjency nodes of node u
  int v;
  int d[N], pi[N];
  color_t color[N];
  int mincost;
  int sum=0;

  for( i = 0 ; i < N ; i++){
    for( j = 0 ; j < N ; j++){
      w[i][j] = INF;
      adj[i][j] = INF;
    }
  }

  scanf("%d", &n);
  for ( i = 0; i < n; i++ ){
  scanf("%d", &u);
  scanf("%d", &k);
    for( j = 0 ; j < k ; j++){
      scanf("%d", &v);      
      scanf("%d", &w[u][v] );
      adj[u][j] = v;
    }
  }

  // initialize single source
  for( i = 0 ; i < N ; i++){
    d[i] = INF;
    pi[i]= NIL;
  }
  const int s = 0;
  d[s] = 0; // s: source
 
  // dijkstra()
  while(1){
    mincost = INF;
    for(i = 0 ; i < n ; i++){
      if( color[i] != BLACK && d[i] < mincost ){
	mincost = d[i];
	u = i;
      }
    }

    if(mincost == INF){
      break;
    }
    
    color[u] = BLACK; 
    for( i=0 ; i < n ; i++){
      v = adj[u][i];
      if( v == INF ){
	break;
      }
      if( color[v] != BLACK && (d[u] + w[u][v]) < d[v] ){
	pi[v] = u;
	d[v]  = d[u] + w[u][v];
      }
    }
    
  }

  // print
  sum = 0;
  for( i = 0 ; i < n ; i++ ){
    if( d[i] != INF ){
      printf("%d %d\n" ,i ,d[i]);
    }
  }

  return 0; // Don't forget return 0
}