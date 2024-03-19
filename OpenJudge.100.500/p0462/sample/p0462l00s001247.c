#include <stdio.h>

typedef long long ll;

int main(void) {
  ll a;
  long double b;
  scanf("%lld%llf", &a, &b);
  printf("%lld\n", (ll)(a * b));
  return 0;
}
