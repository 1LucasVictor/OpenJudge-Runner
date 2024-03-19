#include <stdio.h>

int main(){

  int x,y,temp,r;

  scanf("%d%d",&x,&y);

  if(x < y){
    temp = x; 
    x = y;
    y = temp;
  }


  while((r = x%y) != 0){
    x = y;
    y = r;
  }

  printf("%d\n",y);

  return 0;
}