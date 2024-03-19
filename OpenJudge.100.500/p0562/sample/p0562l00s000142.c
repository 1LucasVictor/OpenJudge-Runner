#include <stdio.h>

int main(void)
{
 int a,b,tem = 1 , m = 0;
  scanf( "%d %d",&a,&b );
  while( tem < b )
  {
   tem += a - 1;
    m++;
  }
  printf("%d\n",m);
  return 0;
}