#include <stdio.h>
#include <math.h>
int main(void){
  int d,n,s;
  scanf("%d%d",&d,&n);
  if(n<=99) s=n*pow(100,d);
  else  s=101*pow(100,d);
  printf("%d",s);
  return 0;
}