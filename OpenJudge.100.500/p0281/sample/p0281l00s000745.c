#include <stdio.h>
#include <math.h>
#define N 100
#define white 0
#define gray 1
#define black 2
int n; int INF = (int)INFINITY;
int A[N][N], d[N], color[N], p[N];

void dijkstra(int s) {
  int u, mincost, i;
  for ( int i = 0; i < n; ++i ) {
    color[i] = white;
    d[i] = INF;
    p[i] = -1;
  }
  d[s] = 0;

  while ( 1 ) {
    mincost = INF;
    for ( int i = 0; i < n; ++i ) {
      if ( color[i] != black && d[i] < mincost ) {
        mincost = d[i];
        u = i;
      }
    }
    if ( mincost == INF ) break;

    color[u] = black;

    for ( int v = 0; v < n; ++v ) {
      if ( color[v] != black && A[u][v] != INF ) {
        if ( d[u] + A[u][v] < d[v] ) {
          d[v] = d[u] + A[u][v];
          p[v] = u;
          color[v] = gray;
        }
      }
    }
  }
}

void print(void) {
  for ( int i = 0; i < n; ++i ) {
    printf("%d %d", i, d[i]);
    putchar('\n');
  }
}

int main() {
  int u, k, v, c;
  scanf("%d", &n);
  for ( int i = 0; i < n; ++i ) {
    for ( int j = 0; j < n; ++j ) {
      A[i][j] = INF;
    }
  }
  for ( int i = 0; i < n; ++i ) {
    scanf("%d%d", &u, &k);
    for ( int j = 0; j < k; ++j ) {
      scanf("%d%d", &v, &c);
      A[u][v] = c;
    }
  }
  dijkstra(0);
  print();
  return 0;
}

