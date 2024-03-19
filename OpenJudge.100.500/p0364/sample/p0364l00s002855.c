#include <stdio.h>
int main(){
  
  int W, H, x, y, r;
  scanf("%d%d%d%d%d", &W, &H, &x, &y, &r);
  if ( 0 + r <= x && x <= W - r && 0 + r <= y && y <= H - r) {
    printf("Yes\n");
  } else {
    printf("No\n");
  }
  return 0;
}


