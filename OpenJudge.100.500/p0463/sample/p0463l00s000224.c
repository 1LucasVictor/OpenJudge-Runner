#include <stdio.h>

int main(void){
  int fig;
  scanf("%d" ,&fig);
  fig %= 10;
  if(fig == 3){
    printf("bon");
  }else if(fig == 0 || fig == 1 || fig == 6 || fig == 8){
    printf("pon");
  }else{
    printf("hon");
  }
  
  return 0;
}