#include <stdio.h>
int main(void) {
  int a,b,t,r;
  scanf("%d %d %d",&a,&b,&t);
  r = b * (t / a);
  printf("%d\n",r);
  return 0;
}
