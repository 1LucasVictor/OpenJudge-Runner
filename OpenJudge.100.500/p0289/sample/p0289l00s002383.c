#include<stdio.h>

int main(void){
  int x,y,z,tmp;

  scanf("%d%d",&x,&y);

  if(x<y){
    tmp=x;
    x=y;
    y=tmp;
  }

  while(y>0){
    z=x%y;
    x=y;
    y=z;
  }

  printf("%d\n",x);
  return 0;
}