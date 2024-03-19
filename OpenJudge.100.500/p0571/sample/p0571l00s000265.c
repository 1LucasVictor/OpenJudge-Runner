#include <stdio.h>
 
int main(){
  int N, A, B;
  1 <= N <= 20;
  1 <= A <= 50;
  1 <= B <= 50;
  int NA;

  
  	
  scanf("%d %d %d", &N, &A, &B);
  NA = N * A;
  
  
  if(NA <= B){
    printf("%d", NA);
  }else if(B < NA){
    printf("%d", B);
  }
  return 0;
}