#include<stdio.h>
#define X 1
#define Y 1000000000

int main()
{
  int x,y,num,div=0;

  while(1)
    {
      scanf("%d %d",&x,&y);
      if((x >= X && x <= Y) && (y >= X && y <= Y)) break;
    }

  if(x<y)
    {
      num = x;
      x = y;
      y = num;
    }
 
  while(1)
    {
      div = x % y;
      if(div == 0) break;
      x = y;
      y = div;
     }

  printf("%d\n",y);
  
  return 0;
}

