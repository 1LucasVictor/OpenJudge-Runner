#include <stdio.h>
#include <stdlib.h>

int main(){
  int x,y,a,b;
  scanf("%d %d",&x,&y);
  if(x<=0 || y>1000000000) exit(1);
  if(x < y){
    a = x;
    x = y;
    y = a;
  }

  b = x%y;
  while(b != 0){
    x = y;
    y = b;
    b = x%y;
  }

  printf("%d\n",y);

  return 0;
}
