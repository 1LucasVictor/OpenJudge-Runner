#include <stdio.h>

int max(int a,int b){
  if(a > b){
    return a;
  }
  return b;
}

int main(void){
  int A, B, C;
  scanf("%d%d%d", &A, &B, &C);

  printf("%d\n", max(C-(A-B), 0));


  return 0;
}