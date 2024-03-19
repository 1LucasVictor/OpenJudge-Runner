#include <stdio.h>
int main(){
  int h,a,ans=0;
  scanf("%d %d",&h,&a);
  while(h>0){
    h=h-a;
    ans++;
  }
  printf("%d",ans);
  return 0;
}