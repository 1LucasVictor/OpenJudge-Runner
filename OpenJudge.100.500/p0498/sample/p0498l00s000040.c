#include<stdio.h>
int main(void){
  int N;
  scanf("%d",&N);
  if(N % 2 == 1)
    printf("%d",N / 2 + 1);
  else
    printf("%d",N / 2);
  return 0;
}