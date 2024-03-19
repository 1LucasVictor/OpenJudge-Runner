#include<stdio.h>
int gcd(int a, int b) {
  if (a == 0) return b; else return gcd(b % a, a);
}
int main() {
  int a, b, m, n;
  while (scanf("%d %d", &a, &b) != EOF) {
    m = gcd(a, b); n = a / m * b;
    printf("%d %d\n", m, n);
  }
  return 0;
}