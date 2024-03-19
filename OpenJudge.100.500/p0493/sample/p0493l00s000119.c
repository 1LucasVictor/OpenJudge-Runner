#include<stdio.h>
int main(void){
  int a,b,c;
  scanf("%d",&a);
  b=a/500;
  c=a%500;
  b=b*1000;
  c=c/5;
  c=c*5;
  printf("%d",b+c);
  return 0;
}