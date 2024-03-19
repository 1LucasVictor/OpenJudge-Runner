#include <stdio.h>

void call(int n) {
  int i = 1;
  while (++i <= n) {
    int x = i;
    if (x % 3 == 0) {
      printf(" %d", i);
      continue;
    }
    while (x) {
      if (x % 10 == 3) {
        printf(" %d", i);
        break;
      }
      x /= 10;
    }
  }
  printf("\n");
}

int main() {
  int n;
  scanf("%d", &n);
  call(n);
  return 0;
}
