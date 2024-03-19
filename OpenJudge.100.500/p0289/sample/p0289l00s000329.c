#include<stdio.h>

int gcd(int,int);

int main(){
  int x,y;

  scanf("%d%d",&x,&y);

  printf("%d\n",gcd(x,y));

  return 0;
}

int gcd(x,y){

  int r;

  if(x >= y){
    while(y !=0){
      r = y;
      y = x % y;
      x = r;
    }
    return x;
  }

  else{
    while(x != 0){
      r = x;
      x = y % x;
      y = r;
    }
    return y;
  }
}