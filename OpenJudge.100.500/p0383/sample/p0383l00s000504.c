#include<stdio.h>
int main(){

  int n,m,l;
  scanf("%d %d %d", &n, &m, &l);

  int i,j,a[n][m];
  
  for ( i = 0 ; i < n ; i++ ){
    for ( j = 0 ; j < m ; j++ ){
      scanf("%d", &a[i][j]);
    }
  }

  int b[m][l];

  for ( i = 0 ; i < m ; i++ ){
    for( j = 0 ; j < l ; j++ ){
      scanf("%d", &b[i][j]);
    }    
  }

  long sum,c[n][l];
  int k;
  sum =0;

  for ( i = 0 ; i < n ; i++ ){
    for ( j = 0 ; j < l ; j++ ){
      for ( k = 0 ; k < m ; k++ ){

	sum = sum + a[i][k] * b[k][j];

      }

      c[i][j] = sum;
      sum = 0;

    }
  }

  for ( i = 0 ; i < n ; i++ ){
    for ( j = 0 ; j < l ; j++ ){

      printf("%ld", c[i][j]);

      if ( j == l - 1 ){
	printf("\n");
	break;
      }

      printf(" ");
      
    }
    
  }

  return 0;
  
}