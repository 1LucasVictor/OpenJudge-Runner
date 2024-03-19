#include <stdio.h>

int s, hh, mm, ss;
int main(void) {
  scanf("%d", &s);
  hh = s / 3600;
  mm = s / 60 % 60;
  ss = s % 60;
  printf("%d:%d:%d\n", hh, mm, ss);
  return 0;
}
