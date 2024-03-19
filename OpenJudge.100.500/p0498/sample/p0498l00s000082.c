#include<stdio.h>

int main(void){
  int N,count = 0;
  scanf("%d\n",&N);
  count = N / 2 + N%2;
  printf("%d\n",count );

  return 0;
}