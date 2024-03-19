#include<stdio.h>

int main(){
  int a,b,ans=-100000000;
  scanf("%d%d",&a,&b);
  if(a+b>ans)ans=a+b;
  if(a-b>ans)ans=a-b;
  if(a*b>ans)ans=a*b;
  printf("%d",ans);
  return 0;
}