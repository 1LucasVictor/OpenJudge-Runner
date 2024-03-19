#include<stdio.h>
int main(void){
  int N, A, B;
  scanf("%d",&N);
  scanf("%d",&A);
  scanf("%d",&B);
  if(A*N>B){
	  printf("%d",B);
  } else {
    printf("%d",A*N);
  }
  return 0;
}