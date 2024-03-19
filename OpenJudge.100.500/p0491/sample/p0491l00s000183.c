#include <stdio.h>
#include <stdlib.h>

int main()
{
  long long int n, k;
  long long int ans = 0;

  scanf("%lld %lld", &n, &k);

  ans = n;

  for (;ans > 0 && k < n ;) {
    ans -= k;
    if (ans > k*1000) { ans /= 100; }
  }
    ans = llabs(ans);

  printf("%lld\n", ans);
  return 0;
}
