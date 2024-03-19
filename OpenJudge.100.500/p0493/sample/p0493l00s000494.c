#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(void){
  int X;
  scanf("%d",&X);
  if(X>=0 && X<=1000000000)
  {
    int a,b;
    a=X/500;
    a=a*1000;
    b=X%500;
    b=b/5;
    b=b*5;
    a=a+b;
    printf("%d",a);
  }
  return 0;
}