#include <stdio.h>
#include <string.h>
#define MAXLEN 20

int main()
{
  static char str[MAXLEN + 1];
  int i;
  scanf("%s", str);
  for (i = strlen(str) - 1; i >= 0; i--) {
    printf("%c", str[i]);
  }
  printf("\n");
  return 0;
}