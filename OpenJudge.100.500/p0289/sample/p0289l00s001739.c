#include<stdio.h>
#include<stdlib.h>

int main()
{
  int x,y,z;

  scanf("%d%d",&x,&y);
  if( ( x < 1 || 1000000000 < x ) || ( y < 1 || 1000000000 < y )) exit(2);

      while(( z = x % y ) != 0 ){
	x = y;
	y = z;
      }
      printf("%d\n",y);
	return 0;
}