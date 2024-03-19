#include <stdio.h>
#include <stdlib.h>
int main () {
  int x,y,v,tmp;
  scanf("%d%d",&x,&y);
  if(x<0 || x>1000000000) exit(8);
  if(y<0 || y>1000000000) exit(8);
  if(y>=x)
    {
      tmp = y;
      y = x;
      x = tmp;
    }
  while(v!=0)
    {
      v = x%y;
      x = y;
      y = v;
    }
  printf("%d\n",x);
  return 0;
}

