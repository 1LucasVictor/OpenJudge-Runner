#include <stdio.h>

int main(){
  long int N,M,K;
  
  scanf("%ld %ld %ld",&N,&M,&K);
  
  long int A[N+1];
  long int B[N+1];
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
    if(A[i] < B[j]){
      min = A[i];
      i++;
    }else{
      min = B[j];
      j++;
    }
    if(time+min <= K){
      count++;
      time+=min;
    }else break;
  }
  
  printf("%d\n",count);
  
  return 0;
  
}