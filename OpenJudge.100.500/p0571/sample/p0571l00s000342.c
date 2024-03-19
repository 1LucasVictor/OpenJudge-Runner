#include <stdio.h>

int main(void){
int N,A,B;
  
  scanf("%d %d %d",&N,&A,&B);
  A = N*A;
    if(A>=B){
   		 printf("%d",B);
    }else{
   		 printf("%d",A);
    }
  
  return(0);
  
  
}