#include <stdio.h>
#include <string.h>

int main(void) {
  char s[30000];
  char t[30000];
  int count = 0;
  int i = 0;

  scanf("%s", s);
  scanf("%s", t);
  for (int i = 0; s[i]; i++)
  {
    if (s[i] != t[i])
      count++;
  }
  printf("%d\n", count);
  return 0;
}
