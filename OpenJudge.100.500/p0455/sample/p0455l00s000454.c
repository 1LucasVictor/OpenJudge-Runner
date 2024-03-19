#include <stdio.h>
#include <math.h>

int main(void)
{
  int a, result = 0;
  
  scanf("%d", &a);
  
  result = a + ( a * a ) + ( a * a * a );
  
  printf("%d\n", result);
  return 0;
}