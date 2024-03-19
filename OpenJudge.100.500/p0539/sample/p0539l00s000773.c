#include <stdio.h>

int main()
{
  int n;
  scanf("%d",&n);
  int i,j;
  i = 1;
  while (i <= 9)
  {
    j = 1;
    while (j <= 9)
    {
      if (i * j == n)
      {
        printf("Yes");
        return (0);
      }
      j++;
    }
    i++;
  }
  printf("No");
}