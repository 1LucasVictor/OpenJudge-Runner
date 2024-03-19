#include <stdio.h>
int main(void) {
  int n, a;
  scanf("%d", &n);
  a = n / 2;
  if (n % 2 == 0)
    printf("%d\n", a);
  else
    printf("%d\n", a + 1);
  return 0;
}