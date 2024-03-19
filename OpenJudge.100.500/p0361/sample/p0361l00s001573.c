#include <stdio.h>

int main(void){
  int s, h, m, ss;

  scanf("%d", &s);
  h = s / 3600;
  m = (s % 3600) / 60;
  ss = (s % 3600) % 60;

  printf("%d:%d:%d\n", h, m, ss);
}

