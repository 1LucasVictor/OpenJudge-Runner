#include<stdio.h>
int main(void){
  int A,B,T,pro,ans;
  scanf("%d %d %d",&A,&B,&T);
  pro=(T+0.5)/A;
  ans=B*pro;
  printf("%d",ans);
  return 0;
}