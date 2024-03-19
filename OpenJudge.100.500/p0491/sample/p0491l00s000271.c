#include <stdio.h>

int main(void) {  
 unsigned int N=0, K=0;
  scanf("%d%d",&N,&K);

unsigned int f = N/K;
 N = N-f*K;

  while (1){
    int dif =N-K;
    if (dif < 0) dif *= -1;

    if (N >= dif) N = dif;
    else break;

  }

  printf ("%d",N);
  
  return 0;
}