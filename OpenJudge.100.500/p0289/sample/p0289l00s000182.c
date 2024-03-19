#include <stdio.h>

int gcd(int, int);

int main(){
  int x, y;

  scanf("%d%d",&x,&y);
  printf("%d\n",gcd(x,y));

  return 0;
}

int gcd(int x, int y){ 
  while(x != 0 && y != 0){
    if(x >= y) x = x % y;
    else y = y % x;
  }

  return x == 0 ? y : x;
}

