#include<stdio.h>
int main(void){
  int x;
  scanf("%d",&x);
  int a=x/500;
  x-=500*a;
  int b=x/5;
  
  printf("%d",1000*a+b*5);
  return 0;
}