#include<stdio.h>

int main(){
  int x,y;
  scanf("%d%d",&x,&y);
  if(y%2!=0){
    printf("No\n");
    return 0;
  }
  int a=2*x-y/2;
  if(0<=a&&a<=x){
    printf("Yes\n");
  }
  else{
    printf("No\n");
  }
  return 0;
}