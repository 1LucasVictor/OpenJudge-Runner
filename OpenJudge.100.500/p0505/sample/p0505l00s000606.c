#include <stdio.h>

int main(void)
{
  int h, n;
  scanf("%d %d", &h, &n);
  int a[n], i, sum;
  i = 0;
  while (i < n)
  {
    scanf("%d", &a[i]);
    sum += a[i];
    i++;
  }
  if (sum >= h)
  {
    printf("Yes");
  }
  else
  {
    printf("No");
  }
  return 0;
}