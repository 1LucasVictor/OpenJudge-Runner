#include<stdio.h>

int main(void) {
  int x,y;
  
  scanf("%d %d", &x,&y);
  
  if (x*y % 2 == 0) {
    printf("Even");
  }else{
    printf("Odd");
  }
  
  return 0;
}
          