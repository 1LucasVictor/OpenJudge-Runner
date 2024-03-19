#include <stdio.h>

int main(void){
  int A, B;
  int max;
  scanf("%d %d", &A, &B);
  max = A + B;
  if((A - B) > max){
    max = A - B;
  }
  if((A*B) > max){
    max = A*B;
  }
  printf("%d\n", max);
  return 0;
}
