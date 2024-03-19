#include <stdio.h>

int main(void)
{
  int n;
  scanf("%d", &n);
  int i;
  long a[n];
  i = 0;
  while (i < n)
  {
    scanf("%ld", &a[i]);
    i++;
  }
  
  int k = 0;
  i = 0;
  while (i + 1 < n)
  {
    k = i + 1;
    while (k < n)
    {
      if (a[i] == a[k])
      {
        printf("NO");
        return 0;
      }
      k++;
    }
    i++;
  }
  printf("YES");
  return 0;
}
