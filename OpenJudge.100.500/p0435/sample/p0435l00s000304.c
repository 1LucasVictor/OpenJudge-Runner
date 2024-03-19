#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
  int N;
  unsigned long long D;
  long long X[300000], Y[300000];
  int cnt=0;
  
  scanf("%d%llu", &N, &D);
  for(int i = 0; i < N; i++)
    scanf("%lld%lld", X+i, Y+i);
  
  D *= D;
  for(int i = 0; i < N; i++)
    if(X[i]*X[i] + Y[i]*Y[i] <= D)
      cnt++;
  
  printf("%d\n", cnt);
  
  return 0;
}