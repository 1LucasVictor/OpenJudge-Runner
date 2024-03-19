#include<stdio.h>

int main(){

  int x,y,z=1;

  scanf("%d%d",&x,&y);

  if(x<y){
    z=y;
    y=x;
    x=z;
  }
  while(z!=0){
    z=x%y;
    x=y;
    y=z;
  }
  printf("%d\n",x);

  return 0;
}