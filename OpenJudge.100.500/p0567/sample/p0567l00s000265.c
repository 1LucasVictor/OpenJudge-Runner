#include <stdio.h>
 
int main(void){
  int A, B, C;
  scanf("%d %d %d", &A, &B, &C);
  
  A = A - B;
  C = C - A;
  
  if(C < 0) C = 0;
  printf("%d\n", C);
  
  return 0;
}