#include<stdio.h>
int main(void)
{
  unsigned long long int N,K;
  scanf("%ld %ld",&N,&K);
  unsigned long long int i;
  int rmin;
  if(N>K){
    for(i=N/K;i>0;i--){
      N=N-K;
    }
    rmin=N-K;
    if(rmin<0){
      rmin=0-rmin;
    }
    if(rmin<N)
      N=rmin;
    printf("%ld",N);
  }
  else
    printf("%ld",N);
  return 0;
}