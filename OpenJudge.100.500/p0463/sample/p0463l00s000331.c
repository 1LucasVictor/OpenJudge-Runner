#include <stdio.h>

int main (void){
  int x;
  scanf("%d",&x);
  x = x%10;
  if(x == 3){
    printf("bon");
  }else if(x == 0 || x ==1 || x == 6 || x ==8){
    printf("pon");
  }else{
    printf("hon");
  }
  return (0);
  }
