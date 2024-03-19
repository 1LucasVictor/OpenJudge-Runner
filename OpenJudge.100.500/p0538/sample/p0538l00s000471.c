#include <stdio.h>
int main(void) {
  int x,y;
  scanf("%d %d",&x,&y);
  if (x*y<=81 && x*y>=0) {
    printf("%d\n",x*y);
  } else {
    printf("-1\n");
  }
  return 0;
}