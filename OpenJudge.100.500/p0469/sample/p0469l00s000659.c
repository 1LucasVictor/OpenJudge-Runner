#include <stdio.h>

int main(){
 int A,B,K;
  
  scanf("%d",&K);
  scanf("%d %d",&A,&B);
  
  int flag = 0;
  for(int i = K; i <= 1000; i+=K){
    if(A <= i && i <= B){
      flag = 1;
      break;
    }
  }
  
  if(flag == 1){
    printf("OK");
  }else{
    printf("NG");
  }
}