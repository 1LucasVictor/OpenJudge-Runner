#include <stdio.h>

int main(int argc, char const *argv[]) {
  int h=0,x=0,ans=0,a=0;
  scanf("%d",&h,x);
  ans=h/4;
  if (h%4!=0) {
    ans++;
  }
  printf("%d\n",ans);
  return 0;
}
