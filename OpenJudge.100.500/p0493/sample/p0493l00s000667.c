#include <stdio.h>

int main(void) {
  int X;
  scanf("%d", &X);

  int fiv1Cnt = 0;
  int fiv2Cnt = 0;
  while (X > 500) {
    X = X - 500;
    fiv1Cnt++;
  }
  while (X > 5) {
    X = X - 5;
    fiv2Cnt++;
  }
  int sum = 0;
  sum = fiv1Cnt * 1000 + fiv2Cnt * 5;
  printf("%d\n", sum);
  return 0;
}