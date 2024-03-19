#include<stdio.h>


int main(){
  
  int a,b,c,rest;
  scanf("%d %d %d",&a,&b,&c);
  rest = c-(a-b);
  
  if (rest <= 0)
    printf("0");
  else
    printf("%d",rest);
  
  return 0;
  
  
}