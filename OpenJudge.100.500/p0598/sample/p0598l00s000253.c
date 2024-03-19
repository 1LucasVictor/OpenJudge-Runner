#include <stdio.h>
int main() {
  int A, B;
  
  scanf("%d", &A);
  scanf("%d", &B);
  
  if(B % A == 0) {
    printf("%d\n", A + B);
  } else {
    printf("%d\n", A - B);
  }
  
  return 0;
}