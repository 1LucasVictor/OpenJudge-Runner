#include <stdio.h>

int main(void){
  int h,m,s,S;
  scanf("%d",&S);
  m = S / 60;
  s = S % 60;
  h = m / 60;
  m = m % 60;
  printf("%d:%d:%d\n",h,m,s);
  return 0;
}