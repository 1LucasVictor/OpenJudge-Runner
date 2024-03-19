#include <stdio.h>

#define N 100
#define WHITE 0
#define GRAY 1
#define BLACK 2
#define INF 2000000000

int n, m[N][N], color[N], d[N], p[N];

int prim(void);


int main() {
  int i, j, sum = 0;

  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &m[i][j]);
      if (m[i][j] == -1) m[i][j] = INF;
    }
  }

  sum = prim();

  printf("%d\n", sum);

  return 0;
}


int prim(void) {
  int i, j, u, v, minc, sum = 0;

  for (i = 0; i < n; i++) {
    d[i] = INF;
    p[i] = -1;
    color[i] = WHITE;
  }

  d[0] = 0;
  
  while(1) {
    minc = INF;
    for (i = 0; i < n; i++) {
      if (color[i] != BLACK && d[i] < minc) {
	minc = d[i];
	u = i;
      }
    }
    
    if (minc == INF) break;

    color[u] = BLACK;

    for (v = 0; v < n; v++) {
      if (color[v] != BLACK && m[u][v] != INF) {
	if (d[v] > m[u][v]) {
	  d[v] = m[u][v];
	  p[v] = u;
	  color[v] = GRAY;
	}
      }
    }
  }
  for (i = 0; i < n; i++) {
    if (p[i] != -1) sum += m[i][p[i]];
  }
  return sum;
}

