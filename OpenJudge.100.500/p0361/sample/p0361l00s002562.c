#include <stdio.h>

int main(){

  int time;
  int h, m, s;

  scanf("%d", &time);

  h = time / 3600;
  m = (time - h*3600) / 60;
  s = time - h*3600 - m*60;
  printf("%d:%d:%d\n", h, m, s);

  return 0;
}