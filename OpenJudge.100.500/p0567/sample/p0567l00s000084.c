#include <stdio.h>

int main(){
  int A, B, C;
  scanf("%d %d %d", &A, &B, &C);
  C = C - (A - B);
  printf("%d\n", C);
  
  return 0;
}
