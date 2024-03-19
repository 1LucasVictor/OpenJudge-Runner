#include <stdio.h>

int main(void){
  int N, A, B, min;
  scanf("%d %d %d", &N, &A, &B);
  if(N*A >= B) min =B;
  else min = N*A;
  printf("%d\n", min);
  return 0;
}