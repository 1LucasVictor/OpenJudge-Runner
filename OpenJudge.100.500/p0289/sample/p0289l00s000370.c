#include <stdio.h>
#include <stdlib.h>

int euclid(int, int);

int main(){
  int x, y, result;

  scanf("%d%d", &x, &y);

  result = euclid(x, y);

  printf("%d\n", result);

  return 0;
}

int euclid(int x, int y){
  int r;

  if(x > y){
    r = x % y;
    if(r == 0)
      return y;
  }
    
  else{
    r = y % x;
    if(r == 0)
      return x;
  }

  if(r != 0){
    if(x > y)
      return euclid(y, r);
    else
      return euclid(x, r);
  }
}

