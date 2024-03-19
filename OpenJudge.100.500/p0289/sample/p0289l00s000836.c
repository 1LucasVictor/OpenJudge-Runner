#include <stdio.h>

int main(void) {
  int x,y,gcd = 0,i,small;
  scanf("%d",&x); scanf("%d",&y);
  if(x < y)small = x;
  else small = y;

  for(i = 1; i <= small; i++){
    if(x % i == 0 && y % i == 0)gcd = i;
  }
  printf("%d\n",gcd);
  return 0;
}
