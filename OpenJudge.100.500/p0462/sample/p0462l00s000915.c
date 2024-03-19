#include<stdio.h>
int main(void){
  long int a;
  double b;
  double sum=0;
  scanf("%ld%lf",&a,&b);
  //printf("%ld %f\n",a,b);
  //printf("%f\n",(double)a*b);
  sum=(double)a*b;
  printf("%ld\n",(long int)sum);
  return 0;
}
