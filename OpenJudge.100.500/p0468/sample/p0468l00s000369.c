#include <stdio.h>
int main(void) {
  putchar(getchar());
  putchar(getchar() == 'B' ? 'R' : 'B');
  putchar(getchar());
  putchar('\n');
  return 0;
}
