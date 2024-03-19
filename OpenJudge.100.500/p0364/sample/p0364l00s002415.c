#include <stdio.h>
int main(){
  
 int W, H, x, y, r;
 int R, L, U, D;
 scanf("%d%d%d%d%d",&W,&H,&x,&y,&r);
 R = x + r;
 L = x - r;
 U = y + r;
 D = y - r;
 if(R <= W && L >= 0 && U <= H && D >= 0) {
 printf("Yes\n");
 } else {
 printf("No\n");
 }
  
 return 0;
}