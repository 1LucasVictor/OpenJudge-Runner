#include <stdio.h>

int main(){
  int a,b,c;
  if(scanf("%d",&a)==1 && scanf("%d",&b)==1 && scanf("%d",&c)==1){}
  
  int ans = c - (a-b);
  
  if(ans >= 0){
    printf("%d",ans);
  }else{
    printf("0");
  }
  
  return 0;
}