#include <stdio.h>
#include <math.h>

int main(void){
  int D,N,A,X;
  scanf("%d %d",&D,&N);
  X=N/100;
  A = pow(100,D)*(N+X);
  printf("%d",A);
}
