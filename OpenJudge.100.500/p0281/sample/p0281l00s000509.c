#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX 100
#define WHITE 0
#define BLACK 1
#define NIL -1

int color[MAX], d[MAX], M[MAX][MAX];

int main() {
  int n, i, j, k, x, u, v, c, min;

  scanf("%d", &n);

  for(i = 0; i < n; i++)
    for(j = 0; j < n; j++)
      M[i][j] = NIL;

  for(i = 0; i < n; i++){
    scanf("%d %d", &x, &k);

    for(j = 0; j < k; j++){
      scanf("%d %d", &v, &c);
      M[x][v] = c;
    }
  }

  for(i = 0; i < n; i++){
    d[i] = INT_MAX;
    color[i] = WHITE;
  }

  d[0] = 0;

  while(1){
    min = INT_MAX;

    for(i = 0; i < n; i++){
      if(d[i] < min && color[i] == WHITE){
        min = d[i];
        u = i;
      }
    }

    if(min == INT_MAX) break;
    color[u] = BLACK;

    for(v = 0; v < n; v++){
      if(M[u][v] == NIL) continue;
      if(d[v] > M[u][v] + d[u]) d[v] = M[u][v] + d[u];
    }
  }

  for(i = 0; i < n; i++) printf("%d %d\n", i, d[i]);

  return 0;
}