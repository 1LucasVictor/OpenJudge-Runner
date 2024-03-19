#include<stdio.h>
int main(void){
  int a,x;
  scanf("%d %d",&a,&x);
  if(a<x){
    puts("0");
  }
  else if(x<=a)
    puts("10");
  return 0;
}
