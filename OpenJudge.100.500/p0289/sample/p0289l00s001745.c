#include <stdint.h>
#include <stdio.h>

int32_t gcd(const int32_t a, const int32_t b)
{
  int32_t c = 1;
  int32_t i;
  for (i = a; 0 < i; i--) {
    if (((a % i) == 0) && ((b % i) == 0)) {
      return i;
    }
  }
  return c;
}

#if !defined(TEST)
int main(void)
{
  int32_t a, b;
  scanf("%d", &a);
  scanf("%d", &b);

  int32_t c = gcd(a, b);
  printf("%d", c);

  return 0;
}
#endif