#include<stdio.h>

int MAX = 501;
int SIZE=(1<<30);

int main(){

  int n, i, j, num, sum, A[MAX][MAX], x, y, min, d[MAX], p[MAX], s[MAX];

  scanf("%d", &n);

  for ( i = 0; i< n; i++ ){

    for ( j = 0; j < n; j++ ){

      scanf("%d", &num);

      A[i][j] = num;
      if(num ==-1) A[i][j] = 10000;
    }
  }

  for ( i = 0; i < n; i++ ) {

    d[i] = SIZE;
    p[i] = -1;
    s[i] = 0;

  }

  d[0] = 0;

  while(1){

    min = MAX;
    x = -1;

    for ( i = 0; i < n; i++ )
      {
	if ( min > d[i] && ! s[i] )
	  {
	    x = i;
	    min = d[i];
	  }
      }
    if ( x == -1 ) break;
    s[x] = 1;

    for ( y = 0; y < n; y++ )
      {
	if ( !s[y] && A[x][y] != MAX )
	  {
	    if ( d[y] > A[x][y] )
	      {
		d[y] =  A[x][y];
		p[y] = x;
	      }
	  }
      }
  }

  sum = 0;

  for ( i = 0; i < n; i++ )
    {
      if ( p[i] != -1 ) sum += A[i][p[i]];
    }

  printf("%d\n", sum);

  return 0;
}