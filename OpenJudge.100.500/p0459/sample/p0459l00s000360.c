#include<stdio.h>
int main(void){
  int x, y;

  scanf("%d %d",&x,&y);

  x = x * 4;
  y = x - y;
  if(y<0){
    printf("No\n");
    return 0;
  }

  if(y%2==0){
    printf("Yes\n");
  }else{
    printf("No\n");
  }

  return 0;
}