#include <stdio.h>
int main() {
  int a, b, n;
  scanf("%d", &n);
  for (a = 1; a <= 9; a++) {
    for (b = 1; b <= 9; b++) {
      if (a*b == n) {
        puts("Yes");
        return 0;
      }
    }
  }
  puts("No");
  return 0;
}