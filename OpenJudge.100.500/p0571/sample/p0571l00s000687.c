#include <stdio.h>
#include <stdlib.h>

int main(){
  int N, A, B;
  if(scanf("%d %d %d", &N, &A, &B) == EOF) exit(1);
  if(N*A < B){
    printf("%d", N*A);
  }
  else
    printf("%d", B);
  return 0;
}