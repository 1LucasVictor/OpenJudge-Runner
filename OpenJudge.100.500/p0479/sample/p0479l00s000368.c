#include <stdio.h>
#include <string.h>

int main(void)
{
  int n;
  scanf("%d", &n);
  int i, k, b[n];
  memset(b, 0, sizeof(b));
  b[n] = 0;
  for (i = 2; i <= n; i++)
  {
    scanf("%d", &k);
    b[k]++;
  }
  for (i = 1; i <= n; i++)
    printf("%d\n", b[i]);
  return 0;
}
