#include <stdio.h>

int main(void) {
  int N;

  scanf("%d", &N);
  printf("%d\n", N/2 + ((N%2)?1:0));
  return (0);
}
