#include <stdio.h>

int func(int a, int b) {
  if ( b % a == 0 ) {
    return a+b;
  } else {
    return b-a;
  }
}

int main() {
  int a, b;

  scanf("%d %d", &a, &b);
  printf("%d\n", func(a, b));

  return 0;
}