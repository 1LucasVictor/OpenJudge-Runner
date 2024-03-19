#include <stdio.h>

#define MAX 100
#define INFTY 100000000
#define WHITE 0
#define GRAY 1
#define BLACK 2

int n, M[MAX][MAX];

void Dijkstra(void);

int main()
{
  int i, j;
  int u, k, v, c;
  
  scanf("%d", &n);
  
  for( i = 0 ; i < n ; i++ )
    for( j = 0 ; j < n ; j++ )
      M[i][j] = INFTY;
  
  for( i = 0 ; i < n ; i++ ){
    scanf("%d%d", &u, &k);
    for( j = 0 ; j < k ; j++ ){
      scanf("%d%d", &v, &c);
      M[u][v] = c;
    }
  }

  Dijkstra();

  return 0;
}

void Dijkstra()
{
  int i, u, v, min;
  int color[MAX], d[MAX];

  for( i = 0 ; i < n ; i++ ){
    color[i] = WHITE;
    d[i] = INFTY;
  }
  
  d[0] = 0;
  color[0] = GRAY;
  
  while( 1 ){
    min = INFTY;
    u = -1;
    for( i = 0 ; i < n ; i++ ){
      if( color[i] != BLACK && min > d[i] ){
	u = i;
	min = d[i];
      }
    }
    if( min == INFTY ) break;
    color[u] = BLACK;
    for( v = 0 ; v < n ; v++ ){
      if( color[v] != BLACK && M[u][v] != INFTY ){
	if( d[v] > (d[u] + M[u][v]) ){
	  d[v] = d[u] + M[u][v];
	  color[v] = GRAY;
	}
      }
    }
  }

  for( i = 0 ; i < n ; i++ ){
    printf("%d ", i);
    if( d[i] == INFTY ) printf("-1\n");
    else printf("%d\n", d[i]);
  }
  
}