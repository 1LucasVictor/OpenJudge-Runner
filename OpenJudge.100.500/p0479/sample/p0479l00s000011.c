#include <stdio.h>
#include <string.h>
int main(void)
{
  int n;
  scanf("%d", &n);
  int i, a[n], b[n];
  memset(b, NULL, sizeof(b));
  for (i = 2; i <= n; i++)
  {
    scanf("%d", &a[i]);
    b[a[i]]++;
  }
  for (i = 1; i <= n; i++)
    printf("%d\n", b[i]);
  return 0;
}