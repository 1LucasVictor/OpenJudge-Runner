#include <stdio.h>
int main() {
  int n, result;
  scanf("%d", &n);
  if (n % 2 == 0) {
    result = n / 2;
  } else {
    result = n / 2 + 1;
  }

  printf("%d", result);
  return 0;
}