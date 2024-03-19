#include <stdio.h>

void printReverseStr(char *str) {
  char *ptr = str;

  for (; *ptr != '\0'; ptr++);

  while (ptr-- != str)
    printf("%c", *ptr);
  printf("\n");
}

int main(void) {
  char str[21];

  scanf("%20s", str);

  printReverseStr(str);

  return 0;
}