#include <stdio.h>

int main(int argc, char const *argv[]) {
  unsigned a;

  scanf("%u", &a);

  printf("%u\n", a + a * a + a * a * a);

  return 0;
}
