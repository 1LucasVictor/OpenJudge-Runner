#include<stdio.h>

int main(){
  int x,y;
  scanf("%d%d",&x,&y);
  
  if(y%2==1){printf("No");return 0;}
  
  if(2*y>=x && 4*x>=y){printf("Yes");return 0;}
  
  printf("No");return 0;
}