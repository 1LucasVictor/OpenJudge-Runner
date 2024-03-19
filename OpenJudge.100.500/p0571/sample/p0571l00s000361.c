#include <stdio.h>

int main(){
  int N,A,B;
  scanf("%d %d %d", &N, &A, &B);
  int C = N*A;
  if(C < B){
    printf("%d", C);
  }else {
    printf("%d", B);
  }
  return 0;
}
  