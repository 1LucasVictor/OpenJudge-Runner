#include <stdio.h>
#include <math.h>
 
int main(void)
{
  int i, j, n, a[200000], b[200000], c[200000], result;
  
  scanf("%d", &n);
  
  for( i = 1; i < n; i++ ){
     scanf("%d", &a[i]);
  }
  
  for( i = 1; i < n; i++ ){
    b[a[i]-1] += 1;
  }
    
  for( i = 0; i < n; i++ ){
    printf("%d\n", b[i]);
  }
    
  return 0;
}