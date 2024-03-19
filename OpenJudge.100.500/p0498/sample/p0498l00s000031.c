#include <stdio.h>

int main(void) {
  int n,m;

  scanf("%d", &n);

  m = n / 2 + n % 2;

  printf("%d", m);
}