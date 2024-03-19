#include <stdio.h>

int main(void){

  int A;
  int B;
  
  scanf("%d %d",&A,&B);
  
  if(A > 8  || B > 8){
    puts(":(");
  }
  else{
    puts("Yay!");
  }
  
  return 0;
}