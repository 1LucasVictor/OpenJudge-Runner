#include <stdio.h>

int main (){
  int W, H, x, y, r;
  scanf ("%d %d %d %d %d", &W, &H, &x, &y, &r);
  if (abs(x)-r < 0 || abs(x)+r > abs(W)){
    printf ("No\n");
  } else if (abs(y)-r < 0 || abs(y)+r > abs(H)){
    printf ("No\n");
  } else  {
    printf ("Yes\n");
  }
  return 0;
}