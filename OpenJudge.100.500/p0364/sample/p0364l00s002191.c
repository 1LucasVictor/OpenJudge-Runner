#include<stdio.h>
 
int main(void){
 int w,h,x,y,r;
 scanf("%d", &w);
 scanf("%d", &h);
 scanf("%d", &x);
 scanf("%d", &y);
 scanf("%d", &r);
 
if((0 <= x - r) && (x + r <= w) && (0 <= y - r) && (y + r <= h)){
  printf("Yes\n");
  }
else{
printf("No\n");
}
return 0;
}