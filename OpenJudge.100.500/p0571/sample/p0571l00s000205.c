#include <stdio.h>

int main(void){
  int N, A, B;
  
  scanf("%d %d %d", &N, &A, &B);
  if(N*A<B){
    printf("%d", N*A);
  }else if(N*A>=B){
    printf("%d", B);
  }
  
  return 0;
}