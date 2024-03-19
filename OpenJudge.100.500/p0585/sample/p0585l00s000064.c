#include <stdio.h>

int main(){

  int a,b,t;
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &t);

  printf("%d",((int)(t+0.5)/a)*b);
}