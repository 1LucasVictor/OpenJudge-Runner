#include<stdio.h>

int main (){

  int x,y,a,d,gcd;

  scanf("%d%d",&x,&y);
  if(x>y){
    a = y;
    y = x;
    x = a;
  }
  
  while(y%x != 0){
    d = y%x;
    y = x;
    x = d;
  }
  printf("%d\n",x);
  
}