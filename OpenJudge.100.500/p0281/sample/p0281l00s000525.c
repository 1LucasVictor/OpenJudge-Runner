#include <stdio.h>
#define MAX 101
#define INF 1000000
#define NIL -2
#define WHITE 0
#define BLACK 1

int main() {
  int n, i, j, u, k, v, w[MAX][MAX], d[MAX], pi[MAX], c[MAX], mincost, answer=0;
  
  scanf( "%d" , &n );
  for ( i=0; i<n; i++ ) for ( j=0; j<n; j++ ) w[i][j] = -1;
  for ( i=0; i<n; i++ ) {
    scanf( "%d %d" , &u , &k );
    for ( j=0; j<k; j++ ) {
      scanf( "%d" , &v );
      scanf( "%d" , &w[u][v] );
    }
    if ( i == 0 ) d[i] = 0; else d[i] = INF;
    pi[i] = NIL;
    c[i] = WHITE;
  }
 
  while ( 1 ) {
    mincost = INF;
    for ( i=0; i<n; i++ )
      if ( (c[i] != BLACK) && (d[i] < mincost) ) {
	mincost = d[i];
	u = i;
      }
    if ( mincost == INF ) break;
    c[u] = BLACK;
    for ( v=0; v<n; v++ )
      if ( (w[u][v] != -1) && (c[v] != BLACK) && ((d[u]+w[u][v]) < d[v]) ) {
	pi[v] = u;
	d[v] = d[u] + w[u][v];
      }
  }

  for ( i=0; i<n; i++ ) printf( "%d %d\n" , i , d[i] );
  
  return 0;
}

