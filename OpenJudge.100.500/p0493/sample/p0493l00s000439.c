#include <assert.h>
#include <stdio.h>

int main() {
  unsigned long long int x;
  assert(scanf("%lld", &x) == 1);
  printf("%lld\n", x / 500 * 1000 + x % 500 / 5 * 5);
}
