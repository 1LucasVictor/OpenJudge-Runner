#include<stdio.h>
int main(void)
{
  unsigned long long int N,K;
  scanf("%lld %lld",&N,&K);
  int rmin;
  if(N>K){
    N=N%K;
    rmin=N-K;
    if(rmin<0){
      rmin=0-rmin;
    }
    if(rmin<N)
      N=rmin;
    printf("%lld",N);
  }
  else
    printf("%lld",N);
  return 0;
}
