#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

  int W, H, x, y, r;

  scanf("%d%d%d%d%d", &W, &H, &x, &y, &r);

  if((r <= x && x <= (W - r)) && (r <= y && y <= (H - r))){
    printf("Yes\n");
  }else{
    printf("No\n");
  }
    
  return 0;
}
