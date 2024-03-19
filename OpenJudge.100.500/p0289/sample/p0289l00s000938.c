#include<stdio.h>

int main(){

  int x,y;
  int result;
  int i;
  int keep;

  scanf("%d %d",&x,&y);

  if(x>y){
    keep=x;
    x=y;
    y=keep;
  }

  for(i=1;i<=x;i++){
    if(x%i==0&&y%i==0){
      result=i;
    }
  }
  printf("%d\n",result);

  return 0;
}