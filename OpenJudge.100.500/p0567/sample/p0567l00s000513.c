#include <stdio.h>
int main(void){
  int a,b,c,num1,ans;
  scanf("%d %d %d",&a,&b,&c);
  num1=a-b;
  if(c>num1)
  	ans=c-num1;
  else
    ans=c;
  printf("%d\n",ans);
}
