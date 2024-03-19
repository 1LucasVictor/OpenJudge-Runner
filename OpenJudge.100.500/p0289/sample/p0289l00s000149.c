#include<stdio.h>

int main(){
  int x,y,temp,d,*xi,*yj,*cd,i,j;

  scanf("%d%d",&x,&y);

  if(x<y){
    temp=y;
    y=x;
    x=temp;

  }
  d=x%y;
  while(d!=0){
    x=y;
    y=d;
    d=x%y;
  }

  printf("%d\n",y);

  return 0;

 }

