#include <stdio.h>

int num;

int main() {
  scanf("%d", &num);
  num = num % 3;
  printf("%d", num);
  return 0;
}
