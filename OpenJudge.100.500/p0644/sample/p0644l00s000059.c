#include <stdio.h>
int main(void)
{
  char c[10];
  scanf("%s", c);
  printf("%d\n", c[0]+c[1]+c[2]-3*'0');
  return 0;
}
