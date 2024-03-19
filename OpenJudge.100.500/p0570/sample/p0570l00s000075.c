#include<stdio.h>

int main(void){
  double a,b,k,jug_k;
  int out_k;
  scanf("%lf",&a);
  scanf("%lf",&b);
  k = (a+b)/2;
  out_k = k;
  jug_k = k - out_k;
  if(jug_k == 0){
  	printf("%d",out_k);
  }else{
  	printf("IMPOSSIBLE");
  }
  return 0;
}