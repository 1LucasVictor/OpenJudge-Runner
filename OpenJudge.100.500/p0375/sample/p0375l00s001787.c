#include "stdio.h"

int main(void){
  int x,y,z,i,j,a;

  scanf("%d", &x);
  for(i = 1; i <= x;i++){
    z = 0;
    a = 0;
    if(i % 3 == 0){
      printf(" %d",i);
      a = 1;
    }
    if(a == 0){
      y = i;
      for(j = i; j <= x; j++){
        if((y == 0) || (z == 1))break;
        if(y % 10 == 3){
          printf(" %d", i);
          z = 1;
        }
        y = y / 10;
      }
    }
  }
  printf("\n");
}

