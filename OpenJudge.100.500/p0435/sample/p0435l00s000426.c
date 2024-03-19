#include <stdio.h>

int main() {
  int N, D; scanf("%d%d", &N, &D);
  int ans = 0;
  while (N--) {
    int x, y; scanf("%d%d", &x, &y);
    ans += 1ll * D * D >= 1ll * x * x + 1ll * y * y;
  }
  printf("%d\n", ans);
  return 0;
}
