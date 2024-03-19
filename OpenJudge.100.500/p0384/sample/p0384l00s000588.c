#include <stdio.h>

int main()
{
  int i;
  char c;
  char str[1200];

  fgets(str, 1200, stdin);
  for (i = 0; (c = str[i]) != '\0'; i++) {
    if ('A' <= c && c <= 'Z') {
      str[i] += 32;
    } else if ('a' <= c && c <= 'z') {
      str[i] -= 32;
    }
  }
  printf("%s", str);

  return 0;
}

