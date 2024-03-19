#include <stdio.h>

int main() {
  long int a, b, c, k, ans;
  
  scanf("%ld %ld %ld %ld", &a, &b, &c, &k);
  ans = 0;
  
  if (a > 0) {
    ans = 1 * a;
    k -= a;
  }
  
  if (k > 0 && b > 0) {
    k -= b;
  }
  
  while (k > 0 && c > 0) {
    ans -= 1;
    k -= 1;
    c -= 1;
  }
    
  printf("%ld", ans);
  return (0);
}