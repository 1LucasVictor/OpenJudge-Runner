#include <stdio.h>

int main() {
  int n, debt = 100000;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    debt = debt * 105 / 100;
    if (debt % 1000) {
      debt = (debt / 1000 + 1) * 1000;
    } 
  }
  printf("%d\n", debt);
  return 0;
}
