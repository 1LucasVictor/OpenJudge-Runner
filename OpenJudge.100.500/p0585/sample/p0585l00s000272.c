#include <stdio.h>
int main(void){
  int a,b;
  float t;
  scanf("%d%d%f",&a,&b,&t);
  t=t+0.5;
  t=(int)t/a*b;
  printf("%g",t);
}