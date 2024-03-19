#include <stdio.h>
 
int main (void){
  int X , A ;
  
  scanf("%d %d",&X,&A);
  
  if (X < A){
    X = 0;
    printf("%d",X);
  }
  else{
    X = 10;
    printf("%d",X);
  }
  
  return 0;
}
