#include<stdio.h>
#include<math.h>

int main() {
  int i, N, D, count=0;
  double distance;
  
  scanf("%d%d", &N, &D);
  
  long long int X[N], Y[N];
  
  for(i=0; i<N; i++) {
    scanf("%lld%lld", &X[i], &Y[i]);
  }
  
  for(i=0; i<N; i++) {
    distance = sqrt(X[i]*X[i] + Y[i]*Y[i]);
    //printf("%lf\n", distance);
    
    if(distance<=D) {
      count++;
    }
    
  }
  
  printf("%d\n", count);
  
  return 0;
  
}