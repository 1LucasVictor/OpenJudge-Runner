#include <stdio.h>
int main(){
  int x,y;
  scanf("%d %d",&x,&y);
  int a=2*x;
  int b=4*x;
  if(y%2==0 && y<=b && y>=a){
    printf("Yes");
  }else{
    printf("No");
  }
  return 0;
}