#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void) {
  long long int a, b, c, k;
  scanf("%lld %lld %lld %lld", &a, &b, &c, &k);
  if (k <= a + b) printf("%lld\n", a);
  else printf("%lld\n", a - (k - (a + b)));

  return 0;
}
