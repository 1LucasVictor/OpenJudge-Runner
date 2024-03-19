#include <stdio.h>

int main(){
  int x,y,z;

  scanf("%d%d",&x,&y);

  if(x < y){
    z = x;
    x = y;
    y = z;
  }
  if(x>=1 & y>=1){
    z = x % y;
    
    while(z != 0){
      x = y;
      y = z;
      z = x % y;
    }
  }
  printf("%d\n",y);
  return 0;
}

