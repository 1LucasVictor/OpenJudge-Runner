#include <stdio.h>

int main(void){
  int a,b;
  int x;
  scanf("%d",&x);
  a = x/500;
  b = (x%500)/5;
  printf("%d",a*1000+5*b);
  return 0;
}
