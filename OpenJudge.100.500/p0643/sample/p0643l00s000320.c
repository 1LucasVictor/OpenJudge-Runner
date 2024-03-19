//#include <iostream>
#include <stdio.h>

int main(void) {
  
  // input
  int a,b;
  scanf("%d %d",&a,&b);
  
  // output
  if( ((a*b)%2) <= 0 ){
    printf("Even");
  } else {
    printf("Odd");
  }
  
  return 0;
}