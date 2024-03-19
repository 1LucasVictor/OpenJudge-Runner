#include <stdio.h>
#include <stdlib.h>
int main(){
  long int A,B,C,K,sum;
  scanf("%ld %ld %ld %ld",&A,&B,&C,&K);
  if(A>K) sum=K;
  else if(A+B>K) sum=A;
  else sum=A*2+B-K;
  printf("%ld",sum);
  return 0;
}