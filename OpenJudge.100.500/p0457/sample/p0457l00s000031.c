#include <stdio.h>
#include <math.h>

int main(void)
{
  long int a[200000], b[200000], c = 0, d = 0, i, k, m, n, result = 0, max = 0;
  
  scanf("%ld %ld %ld", &n, &m, &k);
  
  for( i = 0; i < n; i++ ){
      scanf("%ld ", &a[i]);
      
      if( k > c + a[i] ){
          c += a[i];
          d = i + 1;
      }
  }
 //printf("c=%ld, d=%ld\n", c, d);
  for( i = 0; i < m; i++ ){
      scanf("%ld ", &b[i]);
  }
  
  if( c != 0 ){
    max = d;
    result = d;
  } else {
      max = 0;
    result = 0;
  }
  
  for( i = 0; i < m; ){
    
    if( c + b[i] <= k ){
        c += b[i];
        i++;
        result++;
        
        if( result > max ){
            max = result;
        }
        
    } else if ( c + b[i] > k && d >= 0 ){
        c -= a[d-1];
        d--;
        result--;
    } else {
        break;
    }
    //printf("%ld %ld\n", c, result);
  }
  
  printf("%ld\n", max);
  return 0;
}