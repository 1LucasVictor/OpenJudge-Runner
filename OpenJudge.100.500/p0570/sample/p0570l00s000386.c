#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
 
  // 入力
  int a,b;
  scanf("%d",&a);
  scanf("%d",&b);
  
  int result;
  if(a<b)result=b-a;
  else   result=a-b;
  if(result%2==1){
    printf("IMPOSSIBLE\n");
    return 0;
  }
  result/=2;

  if(a<b)result=b-result;
  else   result=a-result;

  printf("%d\n",result);
 
  return 0;
}