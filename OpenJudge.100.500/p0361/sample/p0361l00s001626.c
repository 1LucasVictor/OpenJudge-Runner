#include <stdio.h>

int main(void)
{
  int res, h, m, s;
  scanf("%d", &res);
  
  h = res / 3600;
  m = (res - h * 3600) / 60;
  s = res - (h * 3600 + m * 60);
  printf("%d:%d:%d\n", h, m, s);

  return 0;
}