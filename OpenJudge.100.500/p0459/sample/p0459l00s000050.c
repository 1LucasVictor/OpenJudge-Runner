#include <stdio.h>
#include <string.h>

int X, Y;
int resolve(int x, int y)
{
  if ( x==0 )
    return y==0;
  return resolve(x-1, y-2) || resolve(x-1, y-4);
}
int main()
{
  scanf("%d %d", &X, &Y);
  printf(resolve(X, Y)? "Yes\n": "No\n");
  return 0;
}