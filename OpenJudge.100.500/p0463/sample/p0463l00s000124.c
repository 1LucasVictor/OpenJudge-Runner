#include <stdio.h>
int main(){
  int N;
  scanf("%d",&N);
  if((N+7)%10==0){
    printf("bon");
  }else if((N%10==0) || ((N+9)%10==0) || ((N+4)%10==0) || ((N+2)%10==0)){
    printf("pon");
  }else{
    printf("hon");
  }
  return 0;
}