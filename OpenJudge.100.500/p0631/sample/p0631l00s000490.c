#include <stdio.h>

int main(void){
  int a,b,x = 0;
  scanf("%d %d %d",&a,&b,&x);

  if(a>x){
    printf("NO\n");
  }else if(a+b<x){
    printf("NO\n");
  }else{
    printf("YES\n");
  }
  return 0;
}
