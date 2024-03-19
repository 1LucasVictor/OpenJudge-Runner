#include <stdio.h>

int main(){
  int x,y,a;
  scanf("%d%d",&x,&y);
  if(y < x){
    a=x;
    x=y;
    y=a;
  }
  a=x%y;
  while(1){
    x=y;
    y=a;
    a=x%y;
    if(a <= 0)break;
  }
  printf("%d\n",y);
  return 0;
}

