#include<stdio.h>
int main(void){
  int x,y,a,b;
  scanf("%d""%d",&x,&y);
  a = (4*x - y)/2;
  b = (y - 2*x)/2;
  if(a >= 0 && b >= 0){
    if((2*a) % 2 == 0 && (2*b) % 2 == 0){
      printf("Yes\n");
    }else{
      printf("No\n");
    }
  }else{
    printf("No\n");
  }
  return 0;
}