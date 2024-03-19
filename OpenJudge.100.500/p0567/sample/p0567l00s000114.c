#include<stdio.h>

int main(void){
  int A, B, C, w;
  scanf("%d %d %d", &A, &B, &C);
  w = B+C-A;
  if(w <= 0)
    printf("0\n");
  else
    printf("%d\n", w);
  
  return 0;
}