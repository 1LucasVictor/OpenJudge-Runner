#include<stdio.h>
#include<stdlib.h>
int main(){
  int unused __attribute__((unused));
  int i, N;
  int *A, *k;

  unused = scanf("%d", &N);
  A = (int *)malloc(sizeof(int)*N);
  k = (int *)malloc(sizeof(int)*N);
  for(i=0; i<N; i++) k[i] = 0;
  for(i=0; i<N-1; i++){
    unused = scanf("%d", &A[i]);
    k[(A[i]-1)]++;
  }

  for(i=0; i<N; i++) printf("%d\n", k[i]);
  return 0;
}