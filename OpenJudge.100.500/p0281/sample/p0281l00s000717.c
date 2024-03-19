#include <stdio.h>
#include <limits.h>
#define MAX 100
#define INFTY INT_MAX -1
#define NIL -1
#define WHITE 0
#define GRAY 1
#define BLACK 2

/* Global Variables */
int AM[MAX][MAX]; //Adjacency Matrix
int color[MAX];
int d[MAX], pi[MAX];
int n;

/* Dijkstra's Algorithm */
void dijkstra(int s) {
  int i, u, v;
  int mincost;

  for ( u = 0; u < n; u++ ) {
    color[u] = WHITE;
    d[u] = INFTY;
    pi[u] = NIL;
  }
  d[s] = 0;

  while ( 1 ) {
    mincost = INFTY;
    for ( i = 0; i < n; i++ ) {
      if ( color[i] != BLACK && d[i] < mincost ) {
        mincost = d[i];
        u = i;
      }
    }

    if ( mincost == INFTY ) break;

    color[u] = BLACK;

    for ( v = 0; v < n; v++ ) {
      if ( color[v] != BLACK && AM[u][v] != INFTY ) {
        if ( d[u] + AM[u][v] < d[v] ) { //Relaxation
          d[v] = d[u] + AM[u][v];
          pi[v] = u;
          color[v] = GRAY;
        }
      }
    }
  }

}

/* Main */
int main() {
  int i, j;
  int k, u, v;

  scanf("%d", &n);

  //Initialize
  for ( i = 0; i < n; i++ )
    for ( j = 0; j < n; j++ )
      AM[i][j] = INFTY;

  for ( i = 0; i < n; i++ ) {
    scanf("%d%d", &u, &k);
    for ( j = 0; j < k; j++ ) {
      scanf("%d", &v);
      scanf("%d", &AM[u][v]);
    }
  }

  // Find the Single Source Shortest Path by Dijkstra's Algorithm
  dijkstra(0);

  for ( i = 0; i < n; i++ )
    printf("%d %d\n", i, d[i]);

  return 0;
}