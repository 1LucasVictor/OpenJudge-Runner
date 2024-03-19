#include <stdio.h>

int main(void){
  int sec, sec_m, sec_s, h, m, s;
  scanf("%d", &sec);

  h = sec / (60 * 60);
  sec_m = sec % (60 * 60);

  m = sec_m / 60;
  sec_s = sec_m % 60;

  s = sec_s;

  printf("%d:%d:%d\n", h, m, s);

  return 0;
}