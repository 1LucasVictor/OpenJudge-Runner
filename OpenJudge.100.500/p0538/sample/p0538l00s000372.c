#include <stdio.h>
#include <string.h>
#include "math.h"


int main(int argc, char *argv[]){

  int a, b;
  int x;

  scanf("%d %d", &a, &b);

  if(a<=9 && b<=9){
    x = a*b;
  }else{
    x = -1;
  }

  printf("%d\n", x);

  return 0;
}
