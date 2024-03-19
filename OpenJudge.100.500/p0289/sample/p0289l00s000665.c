#include <stdint.h>
#include <stdio.h>

int64_t gcd(const int64_t x, const int64_t y)
{
  if (y == 0) {
    return x;
  } else if (x >= y) {
    return gcd(y, x % y);
  } else {
    return gcd(y, x);
  }
}

#if !defined(TEST)
int main(void)
{
  int32_t a, b;
  scanf("%d", &a);
  scanf("%d", &b);

  int32_t c = gcd(a, b);
  printf("%d\n", c);

  return 0;
}
#endif