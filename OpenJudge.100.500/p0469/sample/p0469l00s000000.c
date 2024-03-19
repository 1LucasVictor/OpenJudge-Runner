/* A - We Love Golf */

#include <stdio.h>

int main(void){
  int K, A, B;
  scanf("%d", &K);
  scanf("%d %d", &A, &B);
  if(A % K == 0 || B % K == 0){
    printf("OK\n");
  }else if(B - A >= K - 1 || B / K - A / K > 0){
    printf("OK\n");
  }else{
    printf("NG\n");
  }
}
