#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#define LINE_BUF_SIZE  1024

int main(void) {
  
  int i;
  long int N,K;
  long int min,t = 0;

  scanf("%d %d",&N,&K);
  if(N > abs(N - K)){
      t = N % K;
      if(t <= abs(t - K)){
          min = t;
      }else{
          min = abs(t - K);
      }
  }else{
      min = N;
  }
  printf("%d",min);
  return 0;
}