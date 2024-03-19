#include<stdio.h>
#define NN -1
#define ZZ 0
static const int MAX = 1005;
static const int BB = 2;
static const int GG = 1;
static const int INFTY = (1<<21);

int main(){
  int n, i, j, go, u, v, e;
  int M[MAX][MAX];
  int minv;
  int d[MAX], p[MAX], col[MAX];

  scanf("%d", &n);
  

  for ( i = 0; i< n; i++ ){
    for ( j = 0; j < n; j++ ){
      scanf("%d", &e);
      M[i][j] = (e== -1)?INFTY:e;
    }
  }

  for ( i = 0; i < n; i++ ) {
    d[i] = INFTY;
    p[i] = NN;
    col[i] = 0;
  }

  d[0] = 0;

  while(1){
    minv = INFTY;
    u = NN;
    for ( i = 0; i < n; i++ ){
      if ( minv > d[i] && !col[i] ){
          minv = d[i];
	      u = i;
      }
    }
    
    if ( u == -1 ) break;
    
    col[u] = GG;
    for ( v = 0; v < n; v++ ){
      if ( !col[v] && M[u][v] != INFTY ){
	if ( d[v] > M[u][v] ){
	    p[v] = u;
	  d[v] =  M[u][v];
	  	}
      }
    }
  }

  go = ZZ;

  for ( i = 0; i < n; i++ ){
    if ( p[i] != NN ) {
        go = go + M[i][p[i]];
    }
  }

  printf("%d\n", go);

  return 0;
}
