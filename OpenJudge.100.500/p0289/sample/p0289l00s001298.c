#include<stdio.h>

int main(){
  int y,x,d;
  
  scanf("%d%d",&x,&y);
  
  
  while((d=x%y) !=0){
    x=y;
    y=d;
  }
  
  
  printf("%d\n",y);
  
  return 0;
}