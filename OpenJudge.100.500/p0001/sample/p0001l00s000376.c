#include <stdio.h>

int main() {
  int a, b, d, ans;
  while (scanf("%d%d", &a, &b) != EOF) {
    d = a + b;
    ans = 1;
    while (d /= 10) ans++;
    printf("%d\n", ans);
  }
  return 0;
}
