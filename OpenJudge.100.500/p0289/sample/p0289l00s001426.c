#include<stdio.h>
int main(){
  int x,y,z;

  scanf("%d %d",&x, &y);

  // x >= y にする
  if(x < y){
    z = y;
    y = x;
    x = z;
  }

  while(z = x % y){
    x = y;
    y = z;
  }

  printf("%d\n",y);
  
  return 0;
}
