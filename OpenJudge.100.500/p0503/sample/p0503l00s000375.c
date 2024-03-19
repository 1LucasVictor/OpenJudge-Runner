#include <stdio.h>
#include <stdlib.h>

int compare_int(const void *a, const void *b)
{
  return *(int*)a - *(int*)b;
}

int main(void)
{
  int n;
  scanf("%d", &n);
  int i, a[n];
  i = 0;
  while (i < n)
  {
    scanf("%d", &a[i]);
    i++;
  }
  
  qsort(a, n, sizeof(int), compare_int);
  
  i = 0;
  while (i + 1 < n)
  {
    if (a[i] == a[i + 1])
    {
      printf("NO");
      return 0;
    }
    i++;
  }
  printf("YES");
  return 0;
}
