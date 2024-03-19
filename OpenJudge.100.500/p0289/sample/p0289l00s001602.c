#include<stdio.h>

#define MAX 1000000000

int gcd(int x,int y){

  int r;
  int temp;

  if(x < y){
    temp = x;
    x = y;
    y = temp;
  }

  while(y > 0){
    r = x%y;
    x = y;
    y = r;
  }

  return x;
}

int main(){

  int x;
  int y;

  scanf("%d",&x);
  scanf("%d",&y);

  if(x < 1 || x > MAX || y < 1 || y > MAX){
    return -1;
  }

  printf("%d\n",gcd(x,y));

  return 0;
}