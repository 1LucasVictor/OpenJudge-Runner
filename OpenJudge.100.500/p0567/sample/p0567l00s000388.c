#include <stdio.h>

int main(){
  int A, B, C;
  scanf("%d %d %d", &A, &B, &C);
  C = C - (A - B);
  if (C < 0) C = 0;
  printf("%d\n", C);
  
  return 0;
}
