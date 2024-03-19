#include<stdio.h>

int main(){
  int X = 0,f = 0,fh = 0;
  scanf("%d",&X);

  fh = X / 500;
  f = (X % 500) / 5;

  printf("%d",fh * 1000 + f * 5);

  return 0;
}
