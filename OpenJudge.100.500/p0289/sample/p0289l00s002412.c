#include <stdio.h>

int main()
{
  int x, y, t, ans=1;

  scanf("%d %d", &x, &y);

  if( x < y ){
    t = x;
    x = y;
    y = t;
  }

  while(1){
      ans = x % y;
      if( y % ans == 0 )break;
      x = y;
      y = ans;
  }

  printf("%d\n", ans);

  return 0;
}