#include <stdio.h>

typedef long long ll;

int main(void) {
  ll a;
  double b;
  scanf("%lld%lf", &a, &b);
  printf("%lld\n", (ll)(a * b));
  return 0;
}
