#include<stdio.h>

int main(){
  int h,a;
  scanf("%d%d",&h,&a);
  int ans=h/a;
  if(h%a!=0){
    ans++;}
  printf("%d\n",ans);

  return 0;
}
