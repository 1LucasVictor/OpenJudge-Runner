#include<stdio.h>

int main(){

  int x;
  int y;
  int z;
  scanf("%d",&x);
  y=x/3600;
  z=x%3600;
  printf("%d:%d:%d\n",y,z/60,z%60);
  return 0;
  
}
