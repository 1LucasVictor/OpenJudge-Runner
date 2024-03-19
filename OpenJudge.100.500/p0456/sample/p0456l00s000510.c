#include <stdio.h>
#include <string.h>

int main(void) {
  char s[300000];
  char t[300000];
  int count = 0;

  int ret = scanf("%s %s", s, t);
  if (!ret)
    return 0;
  for (int i = 0; s[i]; i++)
  {
    if (s[i] != t[i])
      count++;
  }
  printf("%d\n", count);
  return 0;
}
