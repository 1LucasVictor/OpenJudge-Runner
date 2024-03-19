#include <stdio.h>

int main()
{
  int d, n, result;

  scanf("%d %d", &d, &n);

  switch (d)
  {
  case 0:
    result = n;
    break;
  case 1:
    result = 100 * n;
    break;
  case 2:
    result = 100 * 100 * n;
    break;
  }

  printf("%d\n", result);

  return 0;
}