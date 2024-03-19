#include <stdio.h>

int main(void){
  int a,b;
  scanf("%d",&a);
  scanf("%d",&b);
  
  int c = a*b;
  
  if(c%2 == 0){
    printf("Even");
  }else{
    printf("Odd");
  }
  
  return 0;
}