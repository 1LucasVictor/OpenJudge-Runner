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
    if (s == 1)
      ans += c * 100;
    else if (s == 2)
      ans += c * 10;
    else
      ans += c;
  }
  if ((f[0] == f[1]) && (f[0] == f[2]) && (f[0] == 0))
    printf("0\n");
  else if ((f[0] == 0) && ((f[1] != 0) || (f[2] != 0)) || (ans < bo))
    printf("-1\n");
  else
    printf("%d\n", ans);
  return 0;
}
