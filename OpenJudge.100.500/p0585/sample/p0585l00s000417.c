#include <stdio.h>

int sum(int a, int b, int t){
  int sum;
  sum = (int)(t / a) * b;
  return sum;
}

int main(void){
  int A, B, T;
  scanf("%d", &A);
  scanf("%d", &B);
  scanf("%d", &T);
  printf("%d", sum(A, B, T));
}
