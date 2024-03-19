#include <stdio.h>
int main(void) {
  int h, a, count;
  scanf("%d %d", &h, &a);
  if (h % a == 0)
    printf("%d\n", h / a);
  else
    printf("%d\n", h / a + 1);
  return 0;
}