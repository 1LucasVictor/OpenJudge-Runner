#include<stdio.h>

static const int N = 100;
static const int INFTY = (1<<21);

main(){
  int n, ele, sum=0;
  int x, Mx, i, j;
  int M[N][N], a[N], b[N], X[N];

  scanf("%d", &n);

  for ( i = 0; i< n; i++ ){
    for ( j = 0; j < n; j++ ){
      scanf("%d", &ele);
      M[i][j] = (ele==-1)?INFTY:ele;
    }
  }

  for ( i = 0; i < n; i++ ) {
    a[i] = INFTY;
    b[i] = -1;
    X[i] = 0;
  }
  a[0] = 0;

  while(1){
    Mx = INFTY;
    x = -1;
    for ( i = 0; i < n; i++ ){
      if ( Mx > a[i] && !X[i] ){
        x = i;
        Mx = a[i];

      }
    }
    if ( x == -1 ) 
        break;

    X[x] = 1;
    for ( i = 0; i < n; i++ ){
      if ( !X[i] && M[x][i] != INFTY ){
        if ( a[i] > M[x][i] ){
          a[i] =  M[x][i];
          b[i] = x;

        }
      }
    }
  }

  for ( i = 0; i < n; i++ ){
    if ( b[i] != -1 ) sum += M[i][b[i]];
  }

  printf("%d\n", sum);

  return 0;
}
