#include<stdio.h>
#include <math.h>

int main(void){
  int A,B;
  scanf("%d %d",&A,&B);
  int C,D;
  C = fmax(A+B,A-B);
  D = fmax(C,A*B);
  printf("%d",D);
  return 0;
}
