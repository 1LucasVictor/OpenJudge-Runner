#include <stdio.h>
#include <string.h>

int main(void)
{
  char s[10], t[10];

  scanf("%s%s", s, t);

  if (strncmp(s, t, strlen(s)) == 0 && strlen(t) == strlen(s) + 1)
    printf("Yes\n");
  else
    printf("No\n");

  return 0;
}


