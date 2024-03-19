#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);
  for (int i = 1; i <= 9; ++i) {
    if (n % i == 0 && n / i <= 9) {
      printf("Yes\n");
      return 0;
    }
  }
  printf("No\n");
}
