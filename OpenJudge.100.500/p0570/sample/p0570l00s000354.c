#include <stdio.h>

int main(void) {
  int A,B;

  scanf("%d%d", &A, &B);
  int K;

  if((A+B)%2 ==0){
  K = (A + B) / 2;
  printf("%d", K);
  }

  else
  printf("IMPOSSIBLE\n");

  return 0;
}