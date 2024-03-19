#include <stdio.h>

int main(void) {
  char str[20];
  int i, n;

  scanf("%s", str);

  for (i = 0; i < 20; i++)
    if (str[i] == '\0') break;

  n = i;

  for (i = n - 1; i >= 0; i--)
    putchar(str[i]);
  putchar('\n');

  return 0;
}