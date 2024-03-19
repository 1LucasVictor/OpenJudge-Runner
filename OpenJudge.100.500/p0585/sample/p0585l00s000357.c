#include<stdio.h>

int main(void){
  int a,b,t,i,ans=0;
  scanf("%d %d %d",&a,&b,&t);
  for(i=1;i<t;i++){
    if(a*i<=t) ans+=b;
    else break;
  }
  printf("%d\n",ans);
  return 0;
}