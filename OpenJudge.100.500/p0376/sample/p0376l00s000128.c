#include <stdio.h>

int main(void)
{
  int a[100] = {0};
  int n, i;
  scanf("%d", &n);
  for (i = 0; i < n; i++) scanf("%d", &a[i]);
  for (i = n - 1; i > 0; i--) printf("%d ", a[i]);
  printf("%d", a[i]);
  putchar('\n');
  return 0;
}