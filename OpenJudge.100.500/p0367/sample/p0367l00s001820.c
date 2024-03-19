#include <stdio.h>

int main() {
  int a, b, c, i;
  int ans = 0;
  int z[10001];
  for (i = 0; i <= 10000; i++) z[i] = 0;
  scanf("%d%d%d", &a, &b, &c);
  for (i = 1; i < 80; i++) {
    if (c % i == 0) {
      z[i] = i;
    }
  }
  for (i = a; i <= b; i++) {
    if (z[i] != 0) {
      ans++;
    }
  }
  printf("%d\n", ans);
  return 0;
}