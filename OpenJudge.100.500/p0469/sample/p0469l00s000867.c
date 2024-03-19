#include <stdio.h>
int main() {
  int k, a, b, count = 0;
  scanf("%d %d %d", &k, &a, &b);
  for (int i = a; i <= b; i++) {
    if (i % k == 0) {
      printf("OK");
      count = i;
      break;
    }
  }
  if (count == 0) {
    printf("NG");
  }
  return 0;
}