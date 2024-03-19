#include <stdio.h>

int main (void){
  int W, H, x, y, r;

  scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);

  if(x - r >= 0 && y - r >= 0 && r + x <= W && r + y <= H){
    printf("Yes\n");
  } else {
    printf("No\n");
  }

  return 0;
}