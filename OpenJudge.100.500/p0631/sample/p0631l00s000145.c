#include <stdio.h>

int main()
{
  int a, b, x;
  scanf("%d%d%d", &a, &b, &x);
  if (a + b < x || a > x)
    puts("NO");
  else
    puts("YES");
  return 0;
}