#include <stdio.h>

long long int compute_gcd(long long int smaller, long long int bigger) {
  if (smaller > bigger) {
    return compute_gcd(bigger, smaller);
  }

  if (smaller == 0) {
    return bigger;
  }
  return compute_gcd(smaller, bigger % smaller);
}

long long int compute_lcm(long long int a, long long int b) {
  long long int gcd = compute_gcd(a, b);
  return a * b / gcd;
}

int main(void)
{
  long long int a, b;
  while (scanf("%lld%lld", &a, &b) != EOF) {
    printf("%lld %lld\n", compute_gcd(a, b), compute_lcm(a, b));
  }
  return 0;
}