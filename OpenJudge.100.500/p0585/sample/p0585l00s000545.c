#include<stdio.h>

int main(void){

  int a,b,t;
  int ans;
  scanf("%d%d%d",&a,&b,&t);
  ans=(t+0.5)/a;
  ans=ans*b;
  printf("%d",ans);



  return 0;
}
