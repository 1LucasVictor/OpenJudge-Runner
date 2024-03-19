#include <stdio.h>

int main(void)
{
  int a, sum = 0;
  scanf("%d", &a);

  sum += a;
  sum += (a * a);
  sum += (a * a * a);
  printf("%d\n", sum);
  return 0;
}
