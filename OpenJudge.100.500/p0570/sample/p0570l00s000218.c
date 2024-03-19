#include <stdio.h>
int main() {
  int a, b, ans;
  scanf("%d%d", &a, &b);
  ans = a+b;
  if ((ans % 2))
    puts("IMPOSSIBLE");
  else
    printf("%d", ans/2);
}
