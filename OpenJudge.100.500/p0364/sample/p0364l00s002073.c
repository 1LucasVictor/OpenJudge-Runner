#include <stdio.h>

int main(){
  int w, h, x, y, r;
  scanf("%d %d %d %d %d", &w, &h, &x, &y, &r);
  printf("%s\n",((w-r)>=x)&&((x-r)>=0)&&((h-r)>=y)&&((y-r)>=0)?"Yes":"No");
  return 0;
}