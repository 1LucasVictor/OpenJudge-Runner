#include <stdio.h>

int main (void)
{
  int i, cnt = 0;
  char str[4];

  scanf("%s", str);

  for (i = 0; i < 3; i++) {
    if (str[i] == '1') {
      cnt++;
    }
  }
  printf("%d", cnt);

  return 0;
}