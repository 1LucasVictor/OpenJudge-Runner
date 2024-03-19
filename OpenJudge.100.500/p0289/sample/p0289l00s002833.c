#include<stdio.h>

int main(){
  int x, y, n;

  scanf("%d %d", &x, &y);
  
  if(x < y) {
    n = x;
    x = y;
    y = n;
  }
  
  while(x % y != 0){
    n = x % y;
    x = y;
    y = n;
  }

  printf("%d\n", y);

  return 0;
}
