#include<stdio.h>

int main(void){
  double a,b,k;
  int jug_k ,out_k;
  scanf("%lf",&a);
  scanf("%lf",&b);
  k = (a+b)/2;
  jug_k = fmod(k,1);
  
  if(jug_k == 0){
    out_k = k;
  	printf("%d",out_k);
  }else{
  	printf("impossible");
  }
  return 0;
}