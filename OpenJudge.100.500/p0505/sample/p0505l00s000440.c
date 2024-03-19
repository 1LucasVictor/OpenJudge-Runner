#include <stdio.h>

int main() {
  int h, n, sum=0;
  scanf("%d", &h);
  scanf("%d", &n);
  int as[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &as[i]);
    sum += as[i];
  }
  if (h < sum) {
    puts("Yes");
  }
  else {
    puts("No");
  }
  return 0;
}