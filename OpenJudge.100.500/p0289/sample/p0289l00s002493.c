#include<stdio.h>

int main(){

  int x, y, r;

  scanf("%d %d",&x, &y);

  while(1){
    r = x % y;
    if (r == 0)
      break;
    x = y;
    y = r;
  }

  printf("%d\n",y);
 
  return 0;
}