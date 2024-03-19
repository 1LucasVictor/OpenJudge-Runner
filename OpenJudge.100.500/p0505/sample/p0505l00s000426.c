#include <stdio.h>

int main()
{
  int h, n, s = 0, i, v;
  scanf("%d%d", &h, &n);
  for (i = 0 ; i < n; i++)
  {
    scanf("%d", &v);
    s+=v;
  }
  printf((s >= h)?"Yes\n":"No\n");
  return 0;
}