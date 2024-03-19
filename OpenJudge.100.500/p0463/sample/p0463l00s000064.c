#include<stdio.h>

int main(void){
  int i;
  scanf("%d", &i);
  i = i % 10;
  if (i == 2 || i == 4 || i == 5 || i == 7 || i == 9){
    printf("hon");
  }else if(i == 0 || i == 1 || i == 6 || i == 9){
    printf("pon");
  }else if(i == 3){
    printf("bon");
  }else{}

  return 0;
}
