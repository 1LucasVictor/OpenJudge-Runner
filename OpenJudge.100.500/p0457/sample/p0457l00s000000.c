#include <stdio.h>

int main(){
  long int N,M,K;
  
  scanf("%ld %ld %ld",&N,&M,&K);
  
  long int A[N+1];
  long int B[M+1];
  long int count = 0,time = 0;
  long int i = 0,j = 0;
  long int min =0;
  
  for(i=0;i<N;i++){
    scanf("%ld",&A[i]);
  }
  for(i=0;i<M;i++){
    scanf("%ld",&B[i]);
  }

  i=0;
  while(1){
    if(A[i] < B[j] && A[i] != 0){
      min = A[i];
      i++;
    }else if(B[j] != 0){
      min = B[j];
      j++;
    }
    if(time+min <= K && A[i] != 0 && B[j] != 0){
      count++;
      time+=min;
    }else break;
  }
  
  printf("%ld\n",count);
  
  return 0;
  
}