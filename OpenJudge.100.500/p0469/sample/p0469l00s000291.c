#include <stdio.h>

int main(){
  int K;
  int A,B;
  scanf("%d¥n",&K);
  scanf("%d %d",&A,&B);
  
  int i;
  
  for(i = A;i <= B;i++){
    if(i % K ==0){
      printf("OK");
      break;
    }else if(i == B){
      printf("NG");
      break;
    }
  }
  
  return 0;
}

