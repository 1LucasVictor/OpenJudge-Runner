#include <stdio.h>

int main(void)
{
  int a,b,c;
  scanf("%d %d %d", &a, &b, &c);
  int ans = ((a-b >= c)? 0 : c-(a-b));
  printf("%d\n", ans);
  
  return 0;
}
