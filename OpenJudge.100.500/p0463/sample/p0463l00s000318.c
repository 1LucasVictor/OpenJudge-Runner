#include <stdio.h>

int main (void){
  int x;
  scanf("%d",&x);
  x = x%10;
  if(x == 3){
    printf("bon\n");
  }else if(x == 0,1,6,8){
    printf("pon\n");
  }else{
    printf("hon\n");
  }
  return (0);
  }
