#include <stdio.h>

int main(void)
{
  int k, a, b;

  scanf("%d %d %d", &k, &a, &b);

  if ((b / k) - ((a - 1) / k) > 0) printf("OK");
  else printf("NG");

  return 0;
}