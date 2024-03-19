#include <stdio.h>

int main(){
int K,A,B;
scanf("%d", &K);
scanf("%d %d", &A, &B);

int C = A/K;
int D = B/K;

if(A % K == 0 || B % K == 0 ){
  printf("OK\n");
}else if( D-C >0){
  printf("OK\n");
}else {
  printf("NG\n");
}
  return 0;
}