#include <stdio.h>

int main(void){
  int a, b;
  scanf("%d%d", &a, &b );
  int max;
  int x = a + b;
  int y = a - b;
  int z = a * b;
  max = x;
  if ( y > max ) max = y;
  if ( z > max ) max = z;

  printf("%d", max );
  return 0;
}
