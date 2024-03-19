#include <stdio.h>

#define MAX 100
#define INFTY 2000000
#define WHITE 0
#define GRAY 1
#define BLACK 2

int n, m[MAX][MAX];

int prim(void);

int main()
{
  int i, j, e;

  scanf("%d", &n);
  for(i=0; i<n; i++) {
    for(j=0; j<n; j++) {
      scanf("%d", &e);
      if(e == -1)
        m[i][j] = INFTY;
      else
        m[i][j] = e;
    }
  }
  printf("%d\n", prim());

  return 0;
}

int prim()
{
  int i, v, u, minv, sum;
  int d[MAX], p[MAX], color[MAX];

  for(i=0; i<n; i++) {
    d[i] = INFTY;
    p[i] = -1;
    color[i] = WHITE;
  }
  d[0] = 0;
  while(1) {
    minv = INFTY;
    u = -1;
    for(i=0; i<n; i++) {
      if(minv > d[i] && color[i] != BLACK) {
        u = i;
        minv = d[i];
      }
    }
    if(u == -1)
      break;
    color[u] = BLACK;
    for(v=0; v<n; v++) {
      if(color[v] != BLACK && m[u][v] != INFTY) {
        if(d[v] > m[u][v]) {
          d[v] = m[u][v];
          p[v] = u;
          color[v] = GRAY;
        }
      }
    }
  }
  sum = 0;
  for(i=0; i<n; i++) {
    if(p[i] != -1)
      sum += m[i][p[i]];
  }

  return sum;
}