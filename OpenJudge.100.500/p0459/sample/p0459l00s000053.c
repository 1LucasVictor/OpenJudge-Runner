#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void){
  int X, Y, min, max, TF;
  TF = 0;
  scanf("%d %d", &X, &Y);

  min = X*2;
  max = X*4;

  if(min <= Y && Y <= max)
    TF = 1;

  if(Y%2 == 1) TF = 0;

  if(TF == 1) printf("Yes\n");
  else printf("No\n");

}