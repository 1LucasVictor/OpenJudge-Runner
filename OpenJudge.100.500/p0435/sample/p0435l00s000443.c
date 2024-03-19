#include <stdio.h>


int main(void){
  int N,D;
  long X[200001], Y[200001];
  
  scanf("%d %d", &N, &D);
  int i;
  for(i=0; i<N; i++){
     scanf("%ld %ld", &X[i],&Y[i]);
  }
  
  int L;
  int count = 0;
  
  for(i=0;i<N;i++){
 	L = (X[i]*X[i]) + (Y[i]*Y[i]);
    if(L <= D*D){
      count = count + 1;
    }
  }
  
  printf("%d", count);
  return 0;
}

  
