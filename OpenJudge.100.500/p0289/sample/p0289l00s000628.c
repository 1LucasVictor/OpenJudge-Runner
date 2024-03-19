#include <stdio.h>

int main(){
  int x,y,z,temp;

  scanf("%d%d",&x,&y);

  if(x<y){
    temp = x;
    x = y;
    y = temp;
  }

  z = x%y;
  
  while(z!=0){
    x = y;
    y = z;
    z = x%y;
  }

  printf("%d\n",y);
  
  return 0;
}

