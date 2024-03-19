#include <stdio.h>
#include <math.h>

int main(void)
{
  int a, b, i, j, k, result;
  
  scanf("%d", &k);
  
  scanf("%d %d", &a, &b);
  
  for( i = a; i <= b; i++ ){
      if( i % k == 0 ){
          printf("OK\n");
          return 0;
      }
  }

  
  printf("NG\n");
  return 0;
}