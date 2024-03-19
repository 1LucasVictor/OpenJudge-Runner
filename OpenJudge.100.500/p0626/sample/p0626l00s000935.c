#include <stdio.h>

int main(){
  int D,N,k;
  long ans = 1;
  scanf("%d%d", &D, &N);
  for (k = 0; k < D; k++){
    ans *= 100;
  }
  ans = ans*N;
  printf("%d", ans);
  return 0;
}