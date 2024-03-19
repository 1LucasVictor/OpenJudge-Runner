#include<stdio.h>

int main (void){
  int a,b,c,d;

  scanf("%d",&a);

  b = a / 500;
  a = a - b * 500;
  c = a / 5;
  d = b * 1000 + c * 5;
  printf("%d\n",d);
  return 0;
}
