#include<stdio.h>

int main(void){
  int x,y,a;
  scanf("%d %d",&x,&y);
  if(x>=y){
    a=x%y;
    while(a!=0){
      x = y;
      y = a;
      a = x % y;
    }
    printf("%d\n",y);
  }else if(y>=x){
    a=y%x;
    while(a!=0){
      y = x;
      x = a;
      a = y % x;
    }
    printf("%d\n",x);
  }
}
    

