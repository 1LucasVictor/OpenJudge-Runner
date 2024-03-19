#include <stdio.h>
 
int main(void){
  int A, B, C;
  scanf("%d %d %d", &A, &B, &C);
  
  A = A - B;
  printf("%d\n", C - A);
  
  return 0;
}