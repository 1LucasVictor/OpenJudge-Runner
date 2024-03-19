#include <stdio.h>
#include <math.h>

int main(void){
  int A;
  double B;
  scanf("%d %lf",&A,&B);
  
  double s;
  s = floor((double)A * B);
  
  int t;
  t = (int)s;
  printf("%d",t);
  
  return 0;
}