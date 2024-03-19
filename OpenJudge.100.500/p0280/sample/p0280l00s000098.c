#include <stdio.h>
#define MAX 101
#define INF 1000000
#define NIL -2
#define WHITE 0
#define BLACK 1

int main() {
  int n, i, j, adj[MAX][MAX], d[MAX], pi[MAX], c[MAX], mincost, u, answer=0;
  
  scanf( "%d" , &n );
  for ( i=1; i<=n; i++ ) {
    for ( j=1; j<=n; j++ ) scanf( "%d" , &adj[i][j] );
    if ( i == 1 ) d[i] = 0; else d[i] = INF;
    pi[i] = NIL;
    c[i] = WHITE;
  }

  while ( 1 ) {
    mincost = INF;
    for ( i=1; i<=n; i++ )
      if ( (c[i] != BLACK) && (d[i] < mincost) ) {
	mincost = d[i];
	u = i;
      }
    if ( mincost == INF ) break;
    c[u] = BLACK;
    for ( j=1; j<=n; j++ )
      if ( (adj[u][j] != -1) && (c[j] != BLACK) && (adj[u][j] < d[j]) ) {
	pi[j] = u;
	d[j] = adj[u][j];
      }
  }

  //for ( i=1; i<=n; i++ ) printf("%d %d %d %d\n",i,d[i],pi[i],c[i]);
  //printf("%d\n",mincost);//3864

  for ( i=1; i<=n; i++ ) if ( pi[i] != NIL ) answer += adj[i][pi[i]];
  printf( "%d\n" , answer );
  
  return 0;
}

