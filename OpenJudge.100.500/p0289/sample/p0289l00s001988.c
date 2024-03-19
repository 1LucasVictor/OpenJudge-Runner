#include<stdio.h>

int gcd(int x,int y){
  int r;
  if(x>y){
    int temp;
    temp=x;
    x=y;
    y=temp;
  }
  while(y>0){
    r=x%y;
    x=y;
    y=r;
  }
  return x;
}

int main(){
  int a,b,x;
  scanf("%d %d",&a,&b);
  x=gcd(a,b);
  printf("%d\n",x);
  return 0;
}

