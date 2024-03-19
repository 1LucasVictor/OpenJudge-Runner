#include <stdio.h>
int main()
{
  int a,b,c;
  scanf("%d%d",&a,&b);
  int i = 0;
  c = 1;
  while (c < b)
  {
    c += a * i - (i - 1);
    i++;
  }
  if (b%c == 0)
  {
    i++;
  }
  printf("%d\n",i);
}