#include <stdio.h>
int main(void){
  int a, b, c;
  
  scanf("%d", &a);
  
  b = a / 500;
  c = ((a % 500) / 5);
  
  printf("%d", b * 1000 + c * 5);
  
  return 0;
}