#include <stdio.h>

int main(void){
  int x, y;
  scanf("%d %d", &x, &y);
  if(4*x < y){
    printf("No");
  }else if(2*x > y){
    printf("No");
  }else if(y%2 != 0){
    printf("No");
  }else{
    printf("Yes");
  }
}