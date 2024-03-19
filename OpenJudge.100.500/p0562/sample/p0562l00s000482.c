#include<stdio.h>

int main(){
  int A, B;
  scanf("%d %d", &A, &B);
  if(B>A){
  printf("%d\n", (B/A) +1);
  } else if(B <= A){
    printf("1\n");
  }
  return 0;
}