#include <stdio.h>
#include <stdlib.h>

int main(){
  int x,y,z,tmp;

  scanf("%d%d",&x,&y);
  if(x<1 || y>1e9) exit(1);
  
  if(x<y){
    tmp = x;
    x = y;
    y = tmp;
  }

  z = x % y;
  while(z!=0){
    x = y;
    y = z;
    z = x % y;
  }

  printf("%d\n",y);

  return 0;
}

