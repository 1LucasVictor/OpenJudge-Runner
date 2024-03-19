#include<stdio.h>

int main(){

  int a,x;

  scanf("%d %d", &x, &a);

  if( x >= a ){
    printf("10\n");
  }else if(x < a){
    printf("0\n");
  }
  return 0;
}
