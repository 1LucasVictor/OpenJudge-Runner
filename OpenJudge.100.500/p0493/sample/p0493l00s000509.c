#include <stdio.h>
int main(void){
  int money,a,b,c;
  scanf("%d",&money);
  a = money/500;
  b = money%500;
  c = b/5;
  printf("%d",1000*a+5*c);
}