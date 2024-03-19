#include<stdio.h>
int main(void){
  int a,b,x,y;
  scanf("%d",&a);
  scanf("%d",&b);
  x=b%a;
  if(x==0){
    y=a+b;
  }
  else{
    y=b-a;
  }
  printf("%d",y);
  return 0;
}