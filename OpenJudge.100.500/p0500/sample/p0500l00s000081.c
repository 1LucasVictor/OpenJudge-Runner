#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
  int n, m, s, c;
  int ans = 0;
  int f[3] = {-1, -1, -1};
  int i = 0, J = 0, bo = 0;
  scanf("%d%d", &n, &m);
  bo = pow(10, n - 1);
  if (n == 1)
    bo = 0;
  for (i = 0; i < m; i++)
  {

    scanf("%d%d", &s, &c);
    if ((f[s - 1] != -1) && (f[s - 1] != c))
    {
      printf("-1\n");
      return 0;
    }
    if (f[s - 1] != -1)
      continue;
    f[s - 1] = c;
    if (n == 3)
    {
      if (s == 1)
        ans += c * 100;
      else if (s == 2)
        ans += c * 10;
      else
        ans += c;
    }
    else if (n == 2)
    {
      if (s == 1)
        ans += c * 10;
      else
        ans += c;
    }
    else
      ans += c;
  }
  if (m == 0)
  {
    printf("%d\n", bo);
    return 0;
  }
  if (n == 3)
  {
    if ((f[0] == f[1]) && (f[0] == f[2]) && (f[0] == 0))
      printf("0\n");
    else if ((f[0] == 0) && ((f[1] != 0) || (f[2] != 0)))
      printf("-1\n");
    else if (f[0] == -1)
      printf("%d\n", ans + bo);
    else
      printf("%d\n", ans);
  }
  else if (n == 2)
  {
    if ((f[0] == f[1]) && (f[0] == 0))
      printf("0\n");
    else if (((f[0] == 0) && (f[1] != 0)))
      printf("-1\n");
    else if (f[0] == -1)
      printf("%d\n", ans + bo);
    else
      printf("%d\n", ans);
  }
  else
  {
    printf("%d\n", ans);
  }
  return 0;
}