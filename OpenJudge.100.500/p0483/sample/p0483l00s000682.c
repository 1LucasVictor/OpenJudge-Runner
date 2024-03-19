#include <stdio.h>

int main(void)
{
  int n;
  scanf("%d", &n);
  int tmp = n;
  while (n != 0)
  {
    tmp = n % 10;
    n /= 10;
    if (tmp == 7)
    {
      printf("Yes");
      return 0;
    }
  }
  printf("No");
  return 0;
}