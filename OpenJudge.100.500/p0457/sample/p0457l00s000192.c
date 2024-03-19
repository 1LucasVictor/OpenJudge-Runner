#include<stdio.h>

int main() {
  
  int i, j, n=0, N, M;
  long sum=0, K;
  
  scanf("%d%d%lu", &N, &M, &K);
  
  long A[N], B[M];
  
  for(i=0; i<N; i++) {
    
    scanf("%lu", &A[i]);
    
  }
  
  for(i=0; i<M; i++) {
    
    scanf("%lu", &B[i]);
    
  }
  
  i = 0;
  j = 0;
  
  while(sum <= K) {
    
    if(A[i] < B[j]) {
      
      sum += A[i];
      i++;
      
    } else if(A[i] > B[j]) {
      
      sum += B[j];
      j++;
      
    } else {
      
      sum += A[i];
      i++;
      j++;
        
    }    
        
    n++;
    
  }
  
  printf("%d", n-1);
  
  return 0;
}