#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int a, b, t;

  if (scanf("%d %d %d", &a, &b, &t) == 1) {
    printf("入力エラー");
    return 0;
  }

  printf("%d", t / a * b);

  return 0;
}