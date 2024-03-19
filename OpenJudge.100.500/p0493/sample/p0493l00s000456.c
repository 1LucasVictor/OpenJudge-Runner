#include <stdio.h>

int main() {
  int x;
  scanf("%d", &x);
  int n500 = x / 500;
  int n5 = (x - (500 * n500)) / 5;
  printf("%d", n500 * 1000 + n5 * 5);
  return 0;
}