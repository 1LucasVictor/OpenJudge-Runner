#include <stdio.h>

int main(void)
{
  int x,a;
  scanf("%d %d", &x, &a);
  printf("%d\n", (x >= a)*10);
  return 0;
}
