#include <stdio.h>

int main(void)
{
  int n;
  scanf("%d", &n);
  int a[n], i;
  i = 0;
  while (i < n)
  {
    scanf("%d", &a[i]);
    i++;
  }
  
  while (i < n)
  {
    if (a[i] % 2 == 0)
    {
      if (!(a[i] % 3 == 0 || a[i] % 5 == 0))
      {
        printf("DENIED");
        return 0;
      }
    }
    i++;
  }
  
  printf("APPROVED");
  return 0;
}