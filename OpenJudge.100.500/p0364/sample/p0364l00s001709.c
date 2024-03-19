#include <stdio.h>
int main(){
  int w,h,x,y,r;
  scanf("%d%d%d%d%d",&w,&h,&x,&y,&r);

  if(x < 0 || y < 0)printf("No\n");
  else if(x+r <= w && y+r <= h && r < x && r < y)printf("Yes\n");
  else printf("No\n");
  return 0;
}