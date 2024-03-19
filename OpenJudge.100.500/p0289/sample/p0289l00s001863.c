#include<stdio.h>
int gcd(int,int);
void swap(int,int);
int main(){
  int x,y,d;
  scanf("%d%d",&x,&y);
  d=gcd(x,y);
  printf("%d\n",d);
  return 0;
}

int gcd(int x,int y){
  int r;
  if(x < y)
  swap(x, y);
  while(y > 0){
    r = x % y;
    x = y;
    y = r;
  }
  return x;
}

void swap(int x,int y){
  int temp=0;
  temp=x;
  x=y;
  y=temp;
}

