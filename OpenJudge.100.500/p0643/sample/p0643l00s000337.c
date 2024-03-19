#include <stdio.h>
int main(void) {
  int x;
  int y;
  scanf("%d",&x);
  scanf("%d",&y);
  if(x*y % 2 == 0) {
      printf("Even");
  } else {
      printf("Odd");
  }
}