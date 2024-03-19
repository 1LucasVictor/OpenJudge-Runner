#include<stdio.h>
int main(void){
  int A,B,ans,count;
  ans=1;
  count=0;
  scanf("%d%d",&A,&B);

  while(ans<B){
    ans += A-1;
    count++;
  }
  printf("%d\n",count);
  return 0;
}
