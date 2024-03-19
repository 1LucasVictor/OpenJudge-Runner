#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char a, b, c;
  scanf("%c%c%c",&a,&b,&c);
  a-='0';
  b-='0';
  c-='0';

  printf("%d",a+b+c);
  return 0;
}