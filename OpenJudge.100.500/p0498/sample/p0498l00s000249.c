#include <stdio.h>
int main() {
  int x;
  int ans;
  scanf("%d", &x);
  ans = (double)x / (double)2 + 0.999999;
  printf("%d\n", ans);
  return 0;
}
