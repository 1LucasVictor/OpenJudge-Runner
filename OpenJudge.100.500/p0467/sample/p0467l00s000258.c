/* B - Easy Linear Programming */

#include <stdio.h>

int main(void){
  long int A, B, C, K;
  scanf("%ld %ld %ld %ld", &A, &B, &C, &K);
  if(A == 0 && B == 0){
    printf("%ld\n", (-1) * K);
  }else if(A == 0){
    if(K <= B){
      printf("0\n");
    }else{
      printf("%ld\n", B - K);
    }
  }else if(K <= A + B){
    printf("%ld\n", A);
  }else{
    printf("%ld\n", A - (K - (A + B)));
  }
}
