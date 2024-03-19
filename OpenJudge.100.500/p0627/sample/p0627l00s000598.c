#include <stdio.h>

int main(void){
  int a, b;
  scanf("%d%d", &a, &b );
  int max;
  int x = a + b;
  int y = a - b;
  int z = a * b;
  max = x;
  ( x < y ) ? max = y : x;
  ( x < z ) ? max = z:  x;

  printf("%d", max );
  return 0;
}
