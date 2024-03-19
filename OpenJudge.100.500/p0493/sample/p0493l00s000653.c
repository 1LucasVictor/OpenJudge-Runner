#include <stdio.h>
int main (){
  int a,b,c,d,e;
  scanf("%d",&a);
  b=a/500;
  c=a%500;
  d=c/5;
  e=1000*b+5*d;
  printf("%d",e);
  return 0;
  }