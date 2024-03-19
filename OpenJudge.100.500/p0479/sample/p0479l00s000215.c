#include <stdio.h>
#include <math.h>

int main(void)
{
  int i, j, n, a[200000], b[200000], c[200000], result;
  
  scanf("%d", &n);
  a[0] = 0;
  
  for( i = 1; i < n; i++ ){
     scanf("%d", &a[i]);
  }
  
  for( i = 0; i < n; i++ ){
    for( j = i+1; j < n; j++ ){
      if( c[a[i]] != 0 ){
        break;
      }
      
    	if( a[i] == a[j] - 1 ){
          
          b[i] += 1;
        }
    }
    c[a[i]] = 1;
  }
  
  for( i = 0; i < n; i++ ){
    printf("%d\n", b[i]);
  }
    
  return 0;
}