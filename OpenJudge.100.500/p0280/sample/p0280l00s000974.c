#include <stdio.h>

#define MAX 100
#define INF 5000

#define WHITE 0
#define GRAY 1
#define BLACK 2

int M[MAX][MAX];
int n;

int prim() {
  int u, min, sum;
  int d[MAX], p[MAX], color[MAX];
  int i;

  for (i = 0; i < n; i++) {
    d[i] = INF;
    p[i] = -1;
    color[i] = WHITE;
  }

  d[0] = 0;

  while(1) {
    min = INF;
    u = -1;
    for (i = 0; i < n; i++) {
      if (min > d[i] && color[i] != BLACK) {
        u = i;
        min = d[i];
      }
    }
    if (u == -1) break;
    color[u] = BLACK;
    for (i = 0; i < n; i++) {
      if (color[i] != BLACK && M[u][i] != INF) {
        if (d[i] > M[u][i]) {
          d[i] = M[u][i];
          p[i] = u;
          color[i] = GRAY;
        }
      }
    }
  }

  sum = 0;
  for (i = 0; i < n; i++) {
    if (p[i] != -1) sum += M[i][p[i]];
  }

  return sum;
}

int main() {
  int i, j, input;

  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &input);
      M[i][j] = (input == -1) ? INF : input;
    }
  }

  printf("%d\n", prim());

  return 0;
}

