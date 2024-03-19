#include <stdio.h>

int main(){
  /* Max is the greatest common divisor of two natural numbers x and y*/
  int i, x, y, Max;
  scanf("%d %d", &x, &y);
  for(i = 1; i <= x; i++){
    if(x % i == 0 && y % i == 0) Max = i;
    if(i == y) break;
  }
  printf("%d\n", Max);
  return 0;
}