#include<stdio.h>

int main(void){
  int K,A,B;
  int wid;
  int rem;
  
  scanf("%d\n %d %d",&K,&A,&B);
  
  rem = A%K;
  K = K-rem;
  wid = B-A;
  
  if(K<wid || rem == 0){
    printf("OK");
  }
  else{
    printf("NG");
  }
  
  return 0;
}