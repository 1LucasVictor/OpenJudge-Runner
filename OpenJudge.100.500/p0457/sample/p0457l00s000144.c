#include <stdio.h>
int main (void){
  
  int i,j;
  int N,M,K;
  
  int A_sum = 0, B_sum = 0, max = 0;
  
  if(scanf("%d %d %d",&N,&M,&K) == 1);
  
  if(1>N || 200000<N){
    return 1;
  }

   if(1>M || 200000<M){
    return 1;
  }

   if(1>N || 1000000<N){
    return 1;
  }
  
  int A[50],B[50];

  A[0] = 0;
  B[0] = 0;

  for(i=1;i<=N;i++){
    if(scanf("%d",&A[i]) == 1);
    if(1>A[i] || 100000<A[i]){
      return 1;
    }
  }
  
  for(i=1;i<=M;i++){
    if(scanf("%d",&B[i]) == 1);
    if(1>B[i] || 1000000000<B[i]){
      return 1;
    }
  }
  
  for(i=0;i<=N;i++){  
    B_sum = 0;
    A_sum = A_sum + A[i];
    
    for(j=0;j<=M;j++){
      
      B_sum = B_sum + B[j];
      if((A_sum + B_sum <= K) && (max < i + j)){
        max = i + j ;
      }
    }
  }
  
  printf("%d",max);
    
  return 0;

}