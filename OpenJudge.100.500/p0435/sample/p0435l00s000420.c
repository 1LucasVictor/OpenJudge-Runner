#include <stdio.h>
#include <math.h>



int main (void) {
    int N;
    int i, count=0;
    long long D;
    long long X[200000], Y[200000];
  
    scanf("%d %lld", &N, &D);
    
  for(i=0; i<N; i++) scanf("%lld %lld", &X[i], &Y[i]);
  
  for(i=0; i<N; i++) {
    if(X[i]*X[i]+Y[i]*Y[i]<=D*D) count += 1;
  }
  
  printf("%d\n", count);


       
    return 0;
}





