#include <stdio.h>

int main(void) {
  char str[3];
  scanf("%s", str);
  printf("A%cC\n", str[1] != 'B' ? 'B' : 'R');
  return 0;
}
