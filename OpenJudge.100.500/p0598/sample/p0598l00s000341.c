#include<stdio.h>

int main(){
  int a,b,ans;
  
  scanf("%d %d",&a,&b);
  ans = b % a;
  
  if(ans == 0) ans = a + b;
  else ans = b - a;
  
  printf("%d",ans);
  
  return 0;
}