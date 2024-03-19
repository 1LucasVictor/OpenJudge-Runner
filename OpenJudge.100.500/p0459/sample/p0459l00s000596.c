#include <stdio.h>
#include <string.h>

int X, Y;
int c;
int resolve(int x, int y)
{
  c++;
  if ( x<=0 )
    return 0;
  if ( y==(x*2) )
    return 1;
  return resolve(x-1, y-4);
}
int main()
{
  scanf("%d %d", &X, &Y);
  if ( (Y%2)!=0 )
    printf("No\n");
  else
    printf(resolve(X, Y)? "Yes\n": "No\n");
  return 0;
}