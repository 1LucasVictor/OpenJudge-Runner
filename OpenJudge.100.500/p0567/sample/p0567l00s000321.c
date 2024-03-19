#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
 
  // 入力
  int a,b,c;
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  
  int result;

  result=c-(a-b);
  if(result<0)result=0;
  printf("%d\n",result);
 
  return 0;
}