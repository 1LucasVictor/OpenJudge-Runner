#include <stdio.h>
int main(void){
  int x,a=0,b=0;
  scanf("%d",&x);
  a=x/500;
  x=x%500;
  b=x/5;
  printf("%d",a*1000+b*5);
  return 0; 
 }
