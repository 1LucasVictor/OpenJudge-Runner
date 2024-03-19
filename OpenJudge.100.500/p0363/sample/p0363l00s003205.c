#include <stdio.h>

int main(void)
{
  int a, b, c, d;

  scanf("%d %d %d", &a, &b, &c);

  if(b<a)
    {
      d=a;
      a=b;
      b=d;
    }

  if(c<b)
    {
      d=b;
      b=c;
      c=d;
    }

  if(b<a)
    {
      d=a;
      a=b;
      b=d;
    }

  printf("%d %d %d\n", a, b, c);

  return 0;
}