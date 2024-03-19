#include <stdio.h>

int main(){
  int K,A,B;
  scanf("%d %d %d",&K,&A,&B);
  
  int L=A;
  int sw=0;
  while(L<=B){
    
    if(L%K==0){
      sw=1;
    }
   
  L=L+1;  
  }
  
  if(sw==1){
    printf("OK\n");
  }else{
    printf("NG\n");
  }
  return 0;
}