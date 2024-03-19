#include <stdio.h>
 
int main(){
  
  int A,B;
  scanf("%d%d",&A,&B);
  
  if(A + B <= 14)
    printf("Yay!");
  else
    printf(":(");
  
  return 0;
 
}