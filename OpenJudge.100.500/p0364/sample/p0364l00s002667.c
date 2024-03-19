#include<stdio.h>
int main(){
  int w,h,x,y,r,n=0;
  scanf("%d%d%d%d%d", &w, &h, &x, &y, &r);
  if(x - r >= 0 && x + r <= w)
    n += 1;

  if(y - r >= 0 && y + r <= h)
    n += 1;

  if(n == 2)
    printf("Yes\n");
  else
    printf("No\n");


  return 0;
}

