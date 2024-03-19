#include<stdio.h>

static const int MAX = 500;
static const int INFTY = (1<<21);

main(){
  int n, i, j;
  int M[MAX][MAX];
  int  k, c, u, v;
  int minv;
  int d[MAX];
  int vis[MAX];

  scanf("%d", &n);
  for ( i = 0; i< n; i++ ){
    for ( j = 0; j < n; j++ ){
      M[i][j] = INFTY;
    }
  }

  for ( i = 0; i < n; i++ ){
    scanf("%d %d", &u, &k);
    for ( j = 0; j < k; j++ ){
      scanf("%d %d", &v, &c);
      M[u][v] = c;
    }
  }

  for ( i = 0; i < n; i++ ) {
    d[i] = INFTY;
    vis[i] = 0;
  }

  d[0] = 0;

  while(1){
    minv = INFTY;
    u = -1;
    for ( i = 0; i < n; i++ ){
      if ( minv > d[i] && !vis[i] ){
	u = i;
	minv = d[i];
      }
    }
    if ( u == -1 ) break;
    vis[u] = 1;
    for ( v = 0; v < n; v++ ){
      if ( !vis[v] && M[u][v] != INFTY ){
	if ( d[v] > d[u] + M[u][v] ){
	  d[v] = d[u] + M[u][v];
	}
      }
    }
  }

  for ( i = 0; i < n; i++ ){
    printf("%d %d\n", i, (d[i]==INFTY?-1:d[i]));
  }

  return 0;
}

