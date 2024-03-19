#include <stdio.h>
int main() {
  int n;
  scanf("%d", &n);
  if ((n - 7) % 10 == 0) {
    printf("Yes");
  } else {
    printf("No");
  }
  return 0;
}