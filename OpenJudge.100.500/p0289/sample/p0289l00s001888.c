#include<stdio.h>
int main(){

  int x,y,n,r;

  scanf("%d%d",&x,&y);

  if(y>x){
    n=y;
    y=x;
    x=n;
  }

  else{
    while(1){
      r=y;
      y=x%y;
      if(y==0)break;
      x=r;
    }
  }

  printf("%d\n",r);

  return 0;
}