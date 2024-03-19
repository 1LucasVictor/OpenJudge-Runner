#include <stdio.h>

int main()
{
  char s[4], i, a = 0;

  scanf("%s", s);
  for (i = 0; i < 3; i++) {
    if (s[i] == '1')
      a++;
  }
  printf("%d\n", a);
}
