#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  int n;
  scanf("%d", &n);
  int i;
  int a[n];
  int b[n];
  for (i = 0; i <= n; i++)
  {
    b[i] = 0;
  }
  for (i = 2; i <= n; i++)
  {
    scanf("%d", &a[i]);
    b[a[i]]++;
  }
  
  for (i = 1; i <= n; i++)
    printf("%d\n", b[i]);
  
  return 0;
}
