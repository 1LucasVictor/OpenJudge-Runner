#include <stdio.h>
int main(){
  double W, H, x, y, r;
  scanf("%lf %lf %lf %lf %lf",&W, &H, &x, &y, &r);
  if(H >= y+r && W >= x+r && 0 <= x-r && 0 <= y-0)printf("Yes\n");
  else printf("No\n");
  return 0;
}