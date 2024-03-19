#include <stdio.h>
#include <math.h>



int main (void) {
    int N, D, X[2*100000], Y[2*100000];
    int i, count=0;
  
    scanf("%d %d", &N, &D);
    
  for(i=0; i<N; i++) scanf("%d %d", &X[i], &Y[i]);
  
  for(i=0; i<N; i++) {
    if(sqrt(X[i]*X[i]+Y[i]*Y[i])<=D) count += 1;
  }
  
  printf("%d\n", count);


       
    return 0;
}



