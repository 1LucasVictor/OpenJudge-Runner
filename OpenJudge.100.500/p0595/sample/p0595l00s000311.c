#include <stdio.h>
int gcd(int a, int b) {
  if (b == 0) {
    return a;
  }
  return gcd(b, a % b);
}
int main() {
  int a,b,k;
  scanf("%d%d%d", &a, &b, &k);
  int x = gcd(a, b);
  int i;
  int cnt = 0;
  for (i = 1; i <= x; i++) {
    if (x % i == 0) {
      cnt++;
      if (cnt == k) {
        break;
      }
    }
  }
  printf("%d\n", i);
  return 0;
}