#include <stdio.h>
#include <math.h>

int main(){
  int a;
  scanf("%d", &a);
  int wa;
  wa = 0;
  
  wa += a;
  wa += pow(a, 2);
  wa += pow(a, 3);
  printf("%d", wa);
}