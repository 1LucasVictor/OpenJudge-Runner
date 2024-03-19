#include <stdio.h>

int main(){
  int N;
  scanf("%d", &N);
  
  int A[N];
  for(int i=0; i<N; i++){
    scanf("%d",&A[i]);
  }
  
  int syonin = 1; //0で非承認
  for(int j=0; j<N; j++){ //入国審査
    if((A[j]%2) == 0){ //偶数であり
      if((A[j]%3) == 0 || (A[j]%5) == 0){ //3or5で割り切れるなら承認
      }else{
        syonin = 0;
      }
    }
  }
  if(syonin == 1){
    printf("APPROVED");
  }else{
    printf("DENIED");
  }
}