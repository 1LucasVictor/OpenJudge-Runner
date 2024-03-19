#include<stdio.h>

int main(){
  int x,y,i,min,gcd=1;
  scanf("%d%d",&x,&y);
  if(x>y)
    min = y;
  else min =x;

  i =2;
  while(min >= i){
    if(x%i == 0 && y%i ==0){
      x /= i;
      y /= i;
      min /= i;
      gcd *= i;
      continue;
    }
    i++;
  }
  printf("%d\n",gcd);
  return 0;
}