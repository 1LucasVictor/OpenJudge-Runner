#include <stdio.h>
int main(void){
  int X, happy, amari;
  scanf("%d", &X);
  happy = X / 500 * 1000;
  amari = X % 500;
  happy = happy + amari / 5 * 5;
  printf("%d", happy);
  return 0;
}