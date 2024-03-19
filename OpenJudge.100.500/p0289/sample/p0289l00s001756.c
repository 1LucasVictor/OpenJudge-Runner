#include <stdio.h>

int main(){
  int a, b, t, r;

  scanf("%d %d",&a, &b);
  if(a < b){
    t = a;
    a = b;
    b = t;
  }

  r = a % b;
  while(r != 0){
    a = b;
    b = r;
    r = a % b;
  }

  printf("%d\n",b);

  return 0;
}