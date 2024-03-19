//ALDS1-1-B: Greatest Common Divisor
//2019.05.24

#include <stdio.h>

int main(void){
  int x, y;
  int tmp;
  int gcd;

  scanf("%d %d\n", &x, &y);
  if (x < y) {
    tmp = x;
    x = y;
    y = tmp;
  }

  while(1){
    tmp = y;
    y = x%y;
    x = tmp;
    if (y == 0) {
      gcd = x;
      printf("%d\n", gcd);
      break;
    }
  }

  return 0;
}

