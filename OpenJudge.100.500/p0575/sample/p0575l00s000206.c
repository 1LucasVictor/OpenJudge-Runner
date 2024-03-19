#include<stdio.h>

int main(void){
  int X, A;
  scanf("%d %d", &X, &A);
  printf("%d", X<A ? 0 : 10);
  return 0;
}
