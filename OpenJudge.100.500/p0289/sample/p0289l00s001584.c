#include<stdio.h>

int main(){
  int x,tmp,y,amari;

  scanf("%d %d",&x,&y);

  while(y!=0){
    tmp = y;
    y = x%y;
    x = tmp;


  }
  printf("%d\n",x);

  return 0;
}