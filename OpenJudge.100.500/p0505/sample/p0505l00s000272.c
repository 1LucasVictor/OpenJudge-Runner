#include <stdio.h>

int main(int argc, char const *argv[]) {
  int h, n;
  scanf("%d %d\n", &h, &n);
  int a = 0;
  int b;
  for (int i = 0; i < n; i++) {
    scanf("%d\n", &b);
    a += b;
  }
  if (h <= a) {
    printf("Yes\n");
  } else {
    printf("No\n");
  }
  return 0;
}
