#include <stdio.h>

int main(void){
  
  int A;
  int B;
  
  scanf("%d",&A);
  scanf("%d",&B);
  
  if(B % A == 0){
    printf("%d",A + B);
  }
  else{
    printf("%d",B - A);
  }
  
  return 0;
}