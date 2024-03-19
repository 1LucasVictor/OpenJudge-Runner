#include <stdio.h>

int main(void)
{
  int width, height, x, y, r;

  scanf("%d %d %d %d %d", &width, &height, &x, &y, &r);
  if((x - r) < 0 || (x + r) > width || (y - r) < 0 || (y + r) > height){
    printf("No\n");
  }else{
    printf("Yes\n");
  }
  return 0;
}