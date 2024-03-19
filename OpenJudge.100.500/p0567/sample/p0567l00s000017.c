#include<stdio.h>

int main(){

  int A, B, C;
  scanf("%d %d %d", &A, &B, &C);
  int d = C - (A - B);
  if(d >= 0){
  printf("%d\n", d);
  }
  else{
    printf("0\n");
  }

}