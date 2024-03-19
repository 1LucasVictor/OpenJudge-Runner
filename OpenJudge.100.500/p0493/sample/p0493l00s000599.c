#include<stdio.h>
#include<math.h>

int main(void){
  int x, a, b, happy;
  scanf("%d",&x);
  
  a = x/500;
  x -= a*500;
  b = x/5;
  happy = a*1000 + b*5;  
  
  printf("%d",happy);
  return 0;
}