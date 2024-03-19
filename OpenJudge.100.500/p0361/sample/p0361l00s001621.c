#include <stdio.h>

int main(int argc, char *argv[]){
  int h, m, s, S;
  int min=60;
  int hour=min*min;
  
  scanf("%d", &S);
  h=S/hour;
  m=(S-h*hour)/min;
  s=S-h*hour-m*min;
  printf("%d:%d:%d\n", h, m, s);
  return(0);
}
