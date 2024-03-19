#include<stdio.h>

int main(void){
  
  int x = 0, y = 0, z = 0;
  scanf("%d%d", &x, &y);
  
  while(1){

    if(x % y == 0){
      break;
    }

    if(x >= y){
      z = x % y;
      x = y;
      y = z;
      continue;
    }

    if(x < y){
      z = x;
      x = y;
      y = z;
      continue;
    }
  }
  printf("%d\n", y);
  return 0;
}