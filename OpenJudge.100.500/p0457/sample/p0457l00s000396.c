#include <stdio.h>
#include <math.h>

int main(void)
{
  long int a[200000], b[200000], e = 0, i, j, k, m, n, cl = 0, result = 0, max = 0;
  
  scanf("%ld %ld %ld", &n, &m, &k);
  
  for( i = 0; i < n; i++ ){
      scanf("%ld ", &a[i]);
  }
  
  for( i = 0; i < m; i++ ){
      scanf("%ld ", &b[i]);
  }
  
  for( i = 0; i <= n; i++ ){
      result = i;     
      cl = e;
      e += a[i];
      
      
      for( j = 0; cl <= k; j++ ){
          cl += b[j];
          result++;
          if( cl > k ){
              result--;
              if( result > max ){
             max = result;
           }
              break;
          }
          if( j + 1 == m ){
              if( result > max ){
          max = result;
      }
              break;
          }
      }
      
      
  }
  
  printf("%ld\n", max);
  return 0;
}