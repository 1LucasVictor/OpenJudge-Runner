#include <stdio.h>

int main(){

  int x, y, num1, num2, temp;
  
  scanf("%d%d",&x, &y);
  
  if(x >= y){
    num1 = x % y;
    num2 = y;
  }
  else{
    num1 = y % x;
    num2 = x;
  }

  while(num2 % num1 != 0){
    temp = num2 % num1;
    num2 = num1;
    num1 = temp;
  }
  
  printf("%d\n", num1);
  
  return 0;
}

