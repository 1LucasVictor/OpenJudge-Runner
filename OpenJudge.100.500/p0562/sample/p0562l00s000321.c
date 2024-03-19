#include <stdio.h>

int main()
{
  int a, b, ans;
  scanf("%d%d", &a, &b);
  ans=(b-1)/(a-1);
  if((b-1)%(a-1)) ans++;
  printf("%d\n",ans);
  return 0;
}