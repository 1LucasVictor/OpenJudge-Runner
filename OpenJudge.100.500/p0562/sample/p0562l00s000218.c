#include <stdio.h>

int main(void){
  int c, A, B, C;
  scanf("%d %d", &A, &B);
  c = 0;
  C = 1;
  while(C < B){
    c++;
    C += A - 1;
  }
  printf("%d\n", c);
  return 0;
}
