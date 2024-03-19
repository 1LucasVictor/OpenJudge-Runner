#include <stdio.h>

int main(void)
{
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  int ans = c - (a - b) > 0 ? c - (a - b) : 0;
  printf("%d\n", ans);
  return 0;
}