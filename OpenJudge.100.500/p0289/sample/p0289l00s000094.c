#include<stdio.h>
#include<stdlib.h>

int main(void){
int x, y;
int i;
int gcd;
while(1){
  scanf("%d %d",&x, &y);
  if(x>=1 && y<=1000000000)break;
}
if(x>=y)x=x%y;
if(x>y){
  for(i=1 ; i<y ; i++){
  if(x%i==0 && y%i==0)gcd=i;
  }
}else if(x<y){
  for(i=1 ; i<x ; i++){
  if(x%i==0 && y%i==0)gcd=i;
  }
}else gcd=x;
printf("%d",gcd);
return 0;
}
