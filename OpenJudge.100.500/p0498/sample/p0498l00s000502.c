#include<stdio.h>
int main(void){
  int a,b;
  scanf("%d",&a);
  b=a/2;
  if(a%2==1) b++;
  printf("%d",b);
  return 0;
}