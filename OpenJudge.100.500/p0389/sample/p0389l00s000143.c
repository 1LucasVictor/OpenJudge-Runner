#include <stdio.h>
#include <string.h>

int main()
{
  char s[201];
  int m, h, l, i, j;

  scanf("%s", s);
  while (strcmp(s, "-") != 0) {
    l = strlen(s);
    i = 0;
    scanf("%d", &m);
    while (m--) {
      scanf("%d", &h);
      i = (i + h) % l;
    }
    printf("%s", s+i);
    s[i] = '\0';
    printf("%s\n", s);
    scanf("%s", s);
  }

  return 0;
}

