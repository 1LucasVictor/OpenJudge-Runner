#include<stdio.h>
#define NIL -1

static const int MAX = 500;
static const int INFTY = (1<<21);

main(){
  int n, i, j, e, sum;
  int min = INFTY, u, v;
  int M[MAX][MAX], visit[MAX], c[MAX], p[MAX];

  scanf("%d", &n);

  for ( i = 0; i< n; i++ ){
    for ( j = 0; j < n; j++ ){
      scanf("%d", &e);
      M[i][j] = (e==-1)?INFTY:e;
    }
  }

  for(i = 0; i < n; i++) {
    c[i] = INFTY;
    visit[i] = 0;
    p[i] = NIL;
  }
  c[0] = 0;

  while(1) {
    u = NIL;
    min = INFTY;

    for(i = 0; i < n; i++) {
      if(c[i] < min && !visit[i]) {
	u = i;
	min = c[i];
      }
    }

    if(u == NIL) {
      break;
    }
    visit[u] = 1;

    for(v = 0; v < n; v++) {
      if(M[u][v] < c[v] && !visit[v]) {
	c[v] = M[u][v];
	p[v] = u;
      }
    }
  }

  sum = 0;

  for ( i = 0; i < n; i++ ){
    if ( p[i] != -1 ) sum += M[i][p[i]];
  }

  printf("%d\n", sum);

  return 0;
}