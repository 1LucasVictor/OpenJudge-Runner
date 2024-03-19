#include <stdio.h>

int main(void)
{
  int aa, bb, tmp = 1, ans = 0;
  scanf("%d %d", &aa, &bb);
  while(tmp < bb)
  {
    tmp += aa - 1;
    ans++;
  }
  printf("%d\n", ans);
  return 0;
}