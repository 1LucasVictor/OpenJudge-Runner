#include<stdio.h>

int main(void){
  int a,b,t,i,ans=0;
  scanf("%d %d %d",&a,&b,&t);
  ans=b*(t/a);
  printf("%d\n",ans);
  return 0;
}