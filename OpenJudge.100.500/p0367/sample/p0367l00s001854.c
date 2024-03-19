#include <stdio.h>

int main(void)
{
  int a, b, c, n;

  scanf("%d %d %d", &a, &b, &c);

  n=0;

  while(a<=b)
    {
      if(c%a==0)
        n++;

      a++;
    }
  printf("%d\n", n);

  return 0;
}