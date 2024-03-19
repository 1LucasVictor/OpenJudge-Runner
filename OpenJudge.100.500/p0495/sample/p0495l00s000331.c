#include <stdio.h>
#include <string.h>
int main(void) {
  char s[3];
  char *a = "AAA";
  char *b = "BBB";
  scanf("%s", s);
  if (strcmp(s, a) == 0 || strcmp(s, b) == 0)
    printf("No\n");
  else
    printf("Yes\n");
  return 0;
}
