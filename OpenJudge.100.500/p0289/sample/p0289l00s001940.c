#include<stdio.h>

int gcd(int,int);

main(){

  int x,y,d;

  scanf("%d%d",&x,&y);

  d = gcd(x,y);

  printf("%d\n",d);

  return 0;

}


int gcd(int x, int y){

  int tmp;

  if(x < y){
    tmp = x;
    x = y;
    y = tmp;
  }

  while(y!=0){
    tmp = y;
    y = x % y;
    x = tmp;
  }

  return x;

}