#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define INF 2000000001

int** init( int n ) {
  /*
   * 初期値INFのn次正方行列を作成する
   */
  int i, j;
  int** a;

  a = (int**)malloc( sizeof( int* ) * n );
  for( i=0; i<n; i++ ) {
    a[i] = (int*)malloc( sizeof( int ) * n );
  }

  for( i=0; i<n; i++ ) {
    for( j=0; j<n; j ++ ) {
      a[i][j] = INF;
    }
  }

  return a;

}

void scanGraph( int** g, int n ) {
  int i;  
  int u, k, v;
  
  
  while( scanf( "%d%d", &u, &k ) != EOF ) {
    
    for( i=0; i<k; i++ ) {
      scanf( "%d", &v );
      scanf( "%d", &g[u][v] );
    }
    
  }
  
  return;
  
}


int* ssspForCost( int** g, int n ) {

  int i;
  int *dist, color[n];
  int minDist, minVert, newVert;

  dist = (int*)malloc( sizeof( int ) * n );

  for( i=0; i<n; i++ ) {
    dist[i] = INF;
    color[i] = 0;
  }

  dist[0] = 0;
  color[0] = 1;
  newVert = 0;

  while( 1 ) {

    for( i=0; i<n; i++ ) {
      if( dist[ newVert ] + g[ newVert ][ i ] < dist[i] && color[i] == 0 ) {
	dist[i] = dist[ newVert ] + g[ newVert ][ i ];
      }
    }

    minDist = INF;
    for( i=0; i<n; i++ ) {
      if( dist[i] < minDist && color[i] == 0 ) {
	minDist = dist[i];
	minVert = i;
      }
    }

    if( minDist == INF ) {
      break;
    }

    dist[ minVert ] = minDist;
    color[ minVert ] = 1;
    newVert = minVert;

  }

  return dist;

}   

void printDist( int* dist, int n ) {
  int i;

  for( i=0; i<n; i++ ) {
    printf( "%d %d\n", i, dist[i] );
  }

  return;

}

int main() {
  int n;
  int** g;
  int* dist;

  scanf( "%d", &n );
  g = init( n );

  scanGraph( g, n );

  dist = ssspForCost( g, n );

  printDist( dist , n );

  return 0;

}