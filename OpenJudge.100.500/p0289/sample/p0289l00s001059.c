#include <stdio.h>

int main()
{
  int x,y,z,n;

  scanf("%d %d",&x,&y);
  if( x < y ){
    n = x;
    x = y;
    y = n;
  }

  z = x % y;
  while( z != 0){
    x = y;
    y = z;
    z = x % y;
  }

  printf("%d\n",y);
  
  return 0;
}