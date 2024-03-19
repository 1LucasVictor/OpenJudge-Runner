#include <stdio.h>

int S, s, h, m;

int main(){

  scanf("%d", &s);

  h =s/3600;
  m = (s%3600)/60;
  S = s%60;
  printf("%d:%d:%d\n", h, m, S);

  return 0;
}

