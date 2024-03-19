#include <stdio.h>
#include <math.h>
int main(){

  int x,y,i,n,tmp;
  
  /*入力*/
  scanf("%d %d",&x,&y);

  /*制約*/
  if(x>=1&&y<=pow(10,9)){

  if(x>=y){
    tmp = y;
    y = x;
    x = tmp;
  }

  n=y%x;
  while(n!=0){
    y = x;
    x = n;
    n = y%x;
  }
  printf("%d\n",x);
  
  }
}

