#include <stdio.h>

void swap(int *x, int *y)
{
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
  
}

int main(void)
{

  int W, H, x, y, r;
  int ans = 0;
  
  scanf("%d%d%d%d%d", &W,&H,&x,&y,&r);
  
  if( x-r > 0 && y-r > 0 ){
    if( x+r < W && y+r < H ){
      ans = 1;
    }
  }
  
  if( ans ){
    printf("Yes\n");
  }
  else{
    printf("No\n");
  }
  
  return 0;

}