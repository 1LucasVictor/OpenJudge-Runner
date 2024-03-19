#include<stdio.h>

static const int N = 100;
static const int INFTY = (1<<21);

main(){
  int n, i, j, k;
  int v, c, x, y, Mx;
  int M[N][N], a[N], X[N];

  scanf("%d", &n);
  for ( i = 0; i< n; i++ ){
    for ( j = 0; j < n; j++ ){
      M[i][j] = INFTY;
    }
  }

  for ( i = 0; i < n; i++ ){
    scanf("%d %d", &y, &v);
    for ( j = 0; j < v; j++ ){
      scanf("%d %d", &x, &c);
      M[y][x] = c;
    }
  }

  for ( i = 0; i < n; i++ ) {
    a[i] = INFTY;
    X[i] = 0;
  }

  a[0] = 0;

  while(1){
    Mx = INFTY;
    y = -1;
    for ( i = 0; i < n; i++ ){
      if ( Mx > a[i] && !X[i] ){
        y = i;
        Mx = a[i];
      }
    }
    if ( y == -1 ) break;
    X[y] = 1;
    for ( k = 0; k < n; k++ ){
      if ( !X[k] && M[y][k] != INFTY ){
        if ( a[k] > a[y] + M[y][k] ){
          a[k] = a[y] + M[y][k];
        }
      }
    }
  }

  for ( i = 0; i < n; i++ ){
    printf("%d %d\n", i, (a[i]==INFTY?-1:a[i]));
  }

  return 0;
}
