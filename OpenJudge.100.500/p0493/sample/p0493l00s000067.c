#include <stdio.h>
 
int main(void){
  int X;
  int a,b,c;
  do{
  scanf("%d",&X);
  }while(X<=0&&X>=1000000000);
  a=X/500;
  b=X%500;
  c=b/5;
  printf("%d",a*1000+c*5);
 
  return 0;
}