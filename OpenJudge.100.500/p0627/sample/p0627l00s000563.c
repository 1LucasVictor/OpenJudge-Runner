#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int a, b;

  scanf("%d %d", &a, &b);

  printf("%d", (int)fmax((double)a - b, fmax((double)a * b, (double)a + b)));

  return 0;
}