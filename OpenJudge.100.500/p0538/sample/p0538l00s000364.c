#include <stdio.h>
int main() {
  int a, b;
  int ans;

  scanf ("%d %d", &a, &b);

  if (a < 10 && b < 10) {
    ans = a * b;
    printf ("%d\n", ans);
  }

  else {
    printf ("-1\n");
  }

  return 0;
}
