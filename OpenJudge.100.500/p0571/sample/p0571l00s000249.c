#include <stdio.h>

int min(int a,int b){
  if(a < b){
    return a;
  }
  return b;
}

int main(void){
  int N, A, B;
  scanf("%d%d%d",&N, &A, &B);

  printf("%d\n", min(A*N, B));


  return 0;
}