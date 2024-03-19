#include<stdio.h>

int main(){
  int x,y,r,a;

  scanf("%d",&x);
  scanf("%d",&y);

  //if(1 > x || y > 10^9){
  //return 0;
    //}

  if(y > x){
    a = x;
    x = y;
    y = a;
  }


  r = x % y;
  while(r != 0){
    x = y;
    y = r;
    r = x % y;
  }

  printf("%d\n",y);

 
  return 0;
}

