#include <stdio.h>

int main(int argc, char *argv[])
{
  int isec, h, m, s;

  scanf("%d", &isec);
  h = isec/3600;
  m = isec%3600/60;
  s = isec%60;
  printf("%d:%d:%d\n", h, m, s);

  return 0;
}

