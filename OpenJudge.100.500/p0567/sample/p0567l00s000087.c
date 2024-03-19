#include<stdio.h>
int main(void){
  int a,b,c;
  int tmp;
  int ans;
  scanf("%d %d %d",&a,&b,&c);
  tmp=a-b;
  ans=c-tmp;
  if(ans<0)
   ans=0;  
  printf("%d\n",ans);
  return 0;
}