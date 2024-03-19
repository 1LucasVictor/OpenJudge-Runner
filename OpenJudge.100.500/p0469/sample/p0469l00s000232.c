#include <stdio.h>

int main(){
  int K,A,B;
  scanf("%d %d %d",&K,&A,&B);
  
  int L=K;
  int sw=0;
  
  while(L<=B){
    if(A<=L){
      sw=1;
    }
    
    L=L+K;
  }
  
  if(sw==1){
    printf("OK\n");
  }else{
    printf("NG\n");
  }
  return 0;
}