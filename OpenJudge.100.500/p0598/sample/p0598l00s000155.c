#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(void) {
  int a, b;

  if(scanf("%d %d", &a, &b) == 1);

  if(b % a == 0) {
    printf("%d", a + b);
  } else {
    printf("%d", b - a);
  }

  return 0;
}
