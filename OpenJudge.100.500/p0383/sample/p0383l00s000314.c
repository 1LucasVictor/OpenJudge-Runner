#include <stdio.h>


int main(void)
{
  
  int n, m, l;
  scanf("%d %d %d", &n, &m, &l);
  
  int A[n][m];
  int B[m][l];
  long long C[n][l];
  
  int i, j, k;
  
  for( i = 0; i < n; i++ ){
    for( k = 0; k < m; k++ ){
      scanf("%d", &A[i][k] );
    }
  }
  
  for( k = 0; k < m; k++ ){
    for( j = 0; j < l; j++ ){
      scanf("%d", &B[k][j] );
    }
  }
  
  for( i = 0; i < n; i++ ){
    for( j = 0; j < l; j++ ){
      C[i][j] = 0;
      for( k = 0; k < m; k++ ){
        C[i][j] += A[i][k] * B[k][j];
      }
    }
  }
        
  for( i = 0; i < n; i++ ){
    for( j = 0; j < l; j++ ){
      if( j ) printf(" ");
      printf("%lld", C[i][j]);
    }
    puts("");
  }
  
 
  return 0;

 
}       