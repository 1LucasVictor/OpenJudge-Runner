#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#define LINE_BUF_SIZE  1024

int main(void) {
  
  int i;
  long int N,K;
  int A[1000];
  long int min,tmp;

  scanf("%d %d",&N,&K);
  min = N;
  tmp = N;
  while (1){
      if(min > abs(tmp-K)){
          min = abs(tmp - K);
          tmp = min;
      }else{
          break;
      }
  }
  printf("%d",min);
  return 0;
}