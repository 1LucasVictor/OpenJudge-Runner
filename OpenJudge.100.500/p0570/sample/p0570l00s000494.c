#include <stdio.h>
#include <stdlib.h>

int main(){
  long int A,B;
  scanf("%ld %ld", &A, &B);
  
  long int K = (A + B)/ 2;
  if(abs(A-K) == abs(B-K)){
    printf("%ld",K);
  }else{
    printf("IMPOSSIBLE");
  }
}