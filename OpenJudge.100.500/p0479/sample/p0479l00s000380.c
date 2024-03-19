#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compare_int(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}

int main(void)
{
  int n;
  scanf("%d", &n);
  int i;
  int a[n];
  int b[n];
  int k = 0;
  memset(b, 0, sizeof(b));
  for (i = 2; i <= n; i++)
  {
    scanf("%d", &a[i]);
    b[a[i]]++;
  }
  
  for (i = 1; i <= n; i++)
    printf("%d\n", b[i]);
  
  return 0;
}
