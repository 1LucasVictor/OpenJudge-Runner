#include "stdio.h"

int main(void){
  int x,y,z,i;
  scanf("%d", &x);
  for(i = 1; i <= x;i++){
    if((i % 10 == 3) || (i % 3 == 0) || ((i / 10 ) % 10== 3)){
      printf(" %d", i);
    }
  }
  printf("\n");
}

