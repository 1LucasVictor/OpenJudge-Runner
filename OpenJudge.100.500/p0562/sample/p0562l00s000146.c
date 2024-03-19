#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
 
  // 入力
  int a,b,cnt;
  scanf("%d %d",&a,&b);

  if(b<=1){
    printf("0\n");
    return 0;
  }
 
  cnt = (b-2)/(a-1);
  cnt+=1;
 
  printf("%d\n",cnt);
 
  return 0;
}