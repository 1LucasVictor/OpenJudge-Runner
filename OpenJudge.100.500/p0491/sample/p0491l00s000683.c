#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#define LINE_BUF_SIZE  1024

int main(void) {
  
  int i;
  long long int N,K;
  long long int t = 0;

  scanf("%d %d",&N,&K);
  t = N % K;
  if(t > K - t){
      printf("%d",K - t);
   }else{
      printf("%d",t);
   }
  return 0;
}