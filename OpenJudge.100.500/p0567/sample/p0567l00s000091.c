#include <stdio.h>
int main(){
  int a, b, c, ans;
  scanf("%d %d %d",&a, &b, &c);
  ans=c-(a-b);
  if(a-b>=c){
    printf("0");
  }
  else if(a-b<c){
    printf("%d",ans);
  }
  
  return 0;
}