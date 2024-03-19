#include <stdio.h>

int main(void)
{
  long long a, b, c, k, ans;

  scanf("%lld%lld%lld%lld", &a, &b, &c, &k);

  if (k <= a )
    ans = k * 1;
  else if ( a < k && k <= a + b)
    ans = a * 1;
  else 
    ans = a * 1 + (-1) * (k - (a + b));

  printf("%lld\n", ans);

  return 0;
}
