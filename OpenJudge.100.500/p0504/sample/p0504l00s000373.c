#include<stdio.h>
int main(void){
  int h,a,ans;
  scanf("%d%d",&h,&a);
  ans=h/a;
  if(h%a!=0){
  ans=ans+1;}
  
  printf("%d",ans);
  return 0;
}