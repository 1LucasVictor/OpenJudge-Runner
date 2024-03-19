#include<stdio.h>

int main(void){

  int x,k,a,b,ans;
  scanf("%d",&x);

  a=x/500;
  k=x%(500*a);
  b=k/5;
  ans=a*1000+b*5;
  printf("%d",ans);


  return 0;
}