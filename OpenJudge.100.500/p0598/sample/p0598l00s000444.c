#include <stdio.h>

int F(int A, int B){
  if(B % A != 0) return B - A;
  else return A + B;
} 

int main(void){
  int A, B;
  scanf("%d %d", &A, &B);
  printf("%d\n", F(A, B));
  return 0;
}
