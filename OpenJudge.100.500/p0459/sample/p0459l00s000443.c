#include <stdio.h>

int main()
{
  int x,y;
  scanf("%d%d",&x,&y);
  int i,j;
  i = 0;
  while (i <= x)
  {
    if (i*2 + (x-i)*4 == y)
    {
      printf("Yes");
      return (0);
    }
    i++;
  }
  printf("No");
}