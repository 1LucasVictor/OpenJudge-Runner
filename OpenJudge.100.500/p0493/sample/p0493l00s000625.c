#include <stdio.h>

int main(){
  int X;
  int happy = 0;
  
  scanf("%d",&X);

  happy += (X/500)*1000;
  X %= 500;
  happy += (X/5)*5;

  printf("%d\n",happy);

  return 0;
}
