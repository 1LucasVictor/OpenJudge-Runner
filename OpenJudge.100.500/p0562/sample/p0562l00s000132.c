#include <stdio.h>
#include <stdlib.h>

int main(){
  int A,B,ans=1;
  scanf("%d%d",&A,&B);
  if(B==1){
    printf("0\n");
    return 0;
  }
  int sum =A;
  while(sum<B){
    ans++;
    sum+=(A-1);
  }

  printf("%d\n",ans);
  return 0;
}