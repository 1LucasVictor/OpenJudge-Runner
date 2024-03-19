#include <stdio.h>
#include <string.h>
#define LEN 20

int main()
{
  int i;
  char str[LEN + 1];

  while (scanf("%s", str) > 0) {
    for (i = strlen(str) - 1; i >= 0; i--) {
      printf("%c", str[i]);
    }
    putchar('\n');
  }

  return 0;
}