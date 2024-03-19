#include<stdio.h>
int main(){
  int x,a,b;
  scanf("%d",&x);
  a=(x/500)*1000;
  b=((x%500)/5)*5;
  printf("%d",a+b);
  return 0;
}