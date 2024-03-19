#include <stdio.h>
int main(){
  int a,b,x;
  scanf("%d %d %d",&x,&a,&b);
  (a>=b)?puts("delicious"):(b-a<=x)?puts("safe"):puts("dangerous");
  return 0;
}