#include <stdio.h>
#include <stdlib.h>

void main(){
  int a, b, r;
  scanf("%d%d", &a,&b);
  if(abs(a) < 1 || abs(a) > 9 || abs(b) < 1 || abs(b) > 9){
    r = -1;
  } else {
    r = a *b;
    }
  printf("%d", r);
}
