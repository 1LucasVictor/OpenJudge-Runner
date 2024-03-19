#include <stdio.h>

int
main(void)
{
  int sec;
  int h, m, s;
  scanf("%d", &sec);
  h = sec * 1 / 60 * 1 / 60;
  m = (sec - h * 60 * 60) * 1 / 60;
  s = (sec - h * 60 * 60 - m * 60);
  printf("%d:%d:%d\n", h, m, s);
  return 0;
}