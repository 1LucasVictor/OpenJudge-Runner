#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
  char str[1200];
  int i;

  fgets(str, 1200 - 1, stdin);

  for (i = 0; i < strlen(str); i++) {
    if ('A' <= str[i] && str[i] <= 'Z') str[i] += 0x20;
    else if ('a' <= str[i] && str[i] <= 'z') str[i] -= 0x20;
  }

  printf("%s", str);

  return 0;
}