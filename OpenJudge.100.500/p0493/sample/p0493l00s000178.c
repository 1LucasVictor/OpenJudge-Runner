#include<stdio.h>
int main(void){
  int x,a,b,c,d,e;
  scanf("%d",&x);
  a = x/500;
  b = x%500/5;
  c = a*1000;
  d = b*5;
  e = c+d;
  printf("%d\n",e);
  
  return 0;
}