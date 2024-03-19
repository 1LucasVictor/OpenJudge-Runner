#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void) {
  int a;
  scanf("%d", &a);
  int a_2 = a * a, a_3 = a * a * a;
  printf("%d\n", a + a_2 + a_3);
  return 0;
}
