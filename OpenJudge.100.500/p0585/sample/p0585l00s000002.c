#include<stdio.h>

int main(void){
  int A, B, T;
  scanf("%d %d %d", &A, &B, &T);
  printf("%d\n", (int)(((double)T+0.5)/(double)A) * B);
  return 0;
}