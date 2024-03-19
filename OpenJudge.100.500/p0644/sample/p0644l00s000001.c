#include <stdio.h>

int main() {
  int base, hun, ten, one;
  
  scanf("%d", &base);
  
  one = base % 10;
  base = base / 10;
  ten = base % 10;
  base = base / 10;
  hun = base % 10;
  
  printf("%d", one + ten + hun);
  
  return 0;
}