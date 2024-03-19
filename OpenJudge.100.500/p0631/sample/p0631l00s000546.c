#include<stdio.h>
int main(void){
  int a,b,x;
  scanf("%d%d%d",&a,&b,&x);
  puts(x>=a?x<=a+b?"YES":"NO":"NO");
  return 0;
}