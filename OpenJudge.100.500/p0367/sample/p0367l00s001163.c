#include <stdio.h>

int main() {
  int a,b,c,x;
  int d = 0;
  int e =0;

  scanf("%d %d %d",&a ,&b,&c);

  for(x=a; x<=b; x++) {
    d = c % x;
    if(d == 0){
      e = e+1;
  }
  }
  printf("%d\n",e);

  return 0;
}