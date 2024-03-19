#include <stdio.h>

int main(void) {
  int a, b, c, k;
  int max = 0;

  scanf("%d %d %d %d", &a, &b, &c, &k);


  if (k <= a) {
    max = k;
  } else if (k <= a + b) {
    max = a;
  } else {
    max = a - (k - (a+b));
  }

  printf("%d\n", max);
  return 0;
}
