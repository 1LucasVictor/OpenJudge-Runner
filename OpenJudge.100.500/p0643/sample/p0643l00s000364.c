#include <stdio.h>
  
int main(){
  int a,b;
  //1=<a,b=<10000なる整数から良い
  scanf("%d %d", &a,&b);
  if(a*b % 2 == 1){
    printf("Odd");
  }else{
    printf("Even");
  }
  return 0;
}