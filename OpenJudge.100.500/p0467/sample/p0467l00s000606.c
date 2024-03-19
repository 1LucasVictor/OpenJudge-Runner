#include <stdio.h>

int main(void) {
  int a, b, c, k;
  scanf("%d%d%d%d", &a, &b, &c, &k);
  int score = 0;
  if(k <= a) {
    score += k;
    goto result;
  }
  score += a;
  k -= a;
  k -= b;
  if(k <= 0) goto result;
  score -= k;
  
  result:
  printf("%d\n", score);
  
  return 0;
}
    