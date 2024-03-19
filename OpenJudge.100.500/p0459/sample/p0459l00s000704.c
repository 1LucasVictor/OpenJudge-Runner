#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
  int x,y;
  int t,l;

  scanf("%d",&x);
  scanf("%d",&y);

  for(int c=0;c<=x;c++)
  {
    l=c*2;
    l+=(x-c)*4;
    if(l==y)
    {
      printf("Yes\n");
      return 0;
    }
  }

  printf("No\n");

  return 0;
}