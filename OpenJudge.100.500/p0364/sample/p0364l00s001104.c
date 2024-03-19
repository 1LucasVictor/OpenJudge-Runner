#include <stdio.h>
int main(){

int w, h, x, y, r;

scanf("%d %d %d %d %d", &w,&h,&x,&y,&r);

if(y-r < 0 || x-r < 0 || x+r > w || y+r > h)
printf("No\n");
else printf("Yes\n");

return 0;
}