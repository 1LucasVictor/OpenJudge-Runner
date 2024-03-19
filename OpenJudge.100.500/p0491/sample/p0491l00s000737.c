#include <stdio.h>

int main()
{
  int n;
  int k;
  int min ;
  
  scanf("%d %d", &n, &k);
  
  min = n;
  
  while (n >= 0) {
    n = n - k;
    
    if (n < 0) 
      n *= -1;
    
    if (min < n && n >= 0) {
      break;
    }
    
    min = n;
  }
  
  if ( k == 1)
    min = 0;
  
  printf("%d",min);
  
  return 0;
}