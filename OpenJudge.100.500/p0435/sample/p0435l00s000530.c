#include<stdio.h>
#include<math.h>

int main() {
  int i, N, D, count=0;
  long long int distance=0;
  
  scanf("%d%d", &N, &D);
  
  int X[N], Y[N];
  
  for(i=0; i<N; i++) {
    scanf("%d%d", &X[i], &Y[i]);
  }
  
  for(i=0; i<N; i++) {
    distance = X[i]*X[i] + Y[i]*Y[i];
    
    if(distance<=D*D) {
      count++;
    }
  }
  
  printf("%d\n", count);
  
}