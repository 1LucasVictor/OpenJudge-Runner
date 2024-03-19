/* ex3_2
   shu_t */

#include<stdio.h>

int main(void){
  int pencil;
  int ones_place;
  //input the number of pencils
  scanf("%d",&pencil);
  //calculate ones place
  ones_place = pencil % 10;
  if(ones_place == 3){
    //ones place is 3
    printf("bon\n");
  }else if(ones_place == 0||ones_place == 1||ones_place == 6||ones_place == 8){
    //ones palce is 0 or 1 or 6 or 8
    printf("pon\n");
  }else{
    //ones palce is 2 or 4 or 5 or 7 or 9
    printf("hon\n");
  }
  return 0;
}