#include<stdio.h>
int main(){
  int w,h,x,y,r;
  
  scanf("%d %d %d %d %d",&w,&h,&x,&y,&r);
  
  if(r - x >= 0 && r - y >= 0 || r + x <= w && r + y <= h || r - x >= 0 && r + y <= h || r - y >= 0 && r + x <= w)
    puts("Yes");
  else
    puts("No");
}
