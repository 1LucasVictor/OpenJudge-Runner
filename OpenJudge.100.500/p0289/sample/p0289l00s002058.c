#include <stdio.h>

int main()
{

  int x,y,r,a;

  scanf("%d %d",&x,&y);

  if(x < y){
    a = x;
    x = y;
    y = a; 
  }

  while((r = x % y) > 0){
      x = y;
      y = r;
    }

    printf("%d",y);

    return 0;
  }