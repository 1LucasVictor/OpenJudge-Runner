#include <stdio.h>

int main(){
  int h,a;
  scanf("%d",&h);
  scanf("%d",&a);
  printf("%d",h/a+(h%a!=0));
  return 0;
}
