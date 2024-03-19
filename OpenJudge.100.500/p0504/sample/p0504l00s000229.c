#include <stdio.h>
#include <math.h>
 
int main(void){
  int h, a;
  int div; 
  scanf("%d", &h);
  scanf("%d", &a);
  div = ceil((double)h/ (double)a);
  printf("%d", div);
  return 0;
}