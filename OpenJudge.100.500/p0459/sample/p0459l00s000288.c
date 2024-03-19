#include <stdio.h>

int main(void){
  int x,y;
  scanf("%d",&x);
  scanf("%d",&y);
  if((y % 2 != 0)||(y<2*x)||(y>4*x)){
  	printf("No");
    return 0;
  }
  printf("Yes");
  return 0;
}
  
  