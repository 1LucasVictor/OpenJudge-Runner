#include <stdio.h>

int main() {
  int n;
  int memo[51] = { 0 };
  for (int a = 0; a <= 9; a++) {
    for (int b = 0; b <= 9; b++) {
      for (int c = 0; c <= 9; c++) {
        for (int d = 0; d <= 9; d++) {
          memo[a + b + c + d]++;
        }
      }
    }
  }
  while (~scanf("%d", &n)) {
    printf("%d\n", memo[n]);
  }
  return 0;
}
