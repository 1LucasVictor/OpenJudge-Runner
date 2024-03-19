#include <stdio.h>
int main(void) {
  int h, n, i, tmp, total = 0;
  scanf("%d %d", &h, &n);
  for (i = 0; i < n; i++) {
    scanf("%d", &tmp);
    total += tmp;
  }
  if (total >= h)
    printf("Yes\n");
  else
    printf("No\n");
  return 0;
}