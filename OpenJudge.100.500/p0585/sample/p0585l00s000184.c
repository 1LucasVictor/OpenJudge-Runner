#include <stdio.h>

int main(void)
{
  int a, b, t, i, j, ans;
  scanf("%d %d %d", &a, &b, &t);
  ans = t / a * b;
  printf("%d\n", ans);
  return 0;
}