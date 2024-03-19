#include <stdio.h>

int main(void) {
  int s;

  scanf("%d", &s);

  int h = s / (60 * 60);
  int m = s / 60 - h * 60;
  s -= h * (60 * 60) + m * 60;

  printf("%d:%d:%d\n", h, m, s);

  return 0;
}

