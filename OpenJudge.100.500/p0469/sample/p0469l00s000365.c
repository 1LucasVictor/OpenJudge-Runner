#include <stdio.h>
#include <stdlib.h>
int main(){
  int K,A,B,i,count;
  count=0;
  scanf("%d",&K);
  scanf("%d %d",&A,&B);
  for(i=A;i<B+1;i++){
    if(i%K==0) count=1;
  }
  if(count==1) printf("OK");
  else printf("NG");
  return 0;
}