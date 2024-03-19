#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
  int X, gohaku, go;

  scanf("%d", &X);

  gohaku = X / 500;
  X = X - 500 * gohaku;
  go = X / 5;
  printf("%d\n", 1000*gohaku+5*go);

  return 0;
}
