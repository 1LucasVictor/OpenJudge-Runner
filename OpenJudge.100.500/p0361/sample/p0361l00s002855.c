#include <stdio.h>

int main(void){
  int second;
  int h, m, s;

  scanf("%d\n", &second);

  if(0<=second && second < 86400){
     h = (second / 3600);
     m = (second % 3600) / 60;
     s = (second % 3600) % 60;
  }

  printf("%d:%d:%d\n", h,m,s);

}