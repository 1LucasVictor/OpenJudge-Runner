#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int i, n;
  char str[21];

  scanf("%s", str);
  n = strlen(str);

  for (i = n - 1; i >= 0; i--) {
    putchar(str[i]);
  }

  putchar('\n');

  return EXIT_SUCCESS;
}