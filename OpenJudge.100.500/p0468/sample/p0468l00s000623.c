#include <stdio.h>

int main() {
  char buf[4];
  scanf("%s", buf);
  buf[1] ^= 'B' ^ 'R';
  printf("%s\n", buf);
}
