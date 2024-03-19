#include <stdio.h>

int main() {
  int a, b;
  
  scanf("%d %d", &a, &b);
  
  printf("%d\n", (b - a) / (a - 1) + 1);
  
  return 0;
}
