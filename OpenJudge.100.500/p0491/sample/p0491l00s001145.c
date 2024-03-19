#include<stdio.h>
int main()
{
  long long N,K,tmp;
  scanf("%lld %lld",&N,&K);
  while(1){
    tmp=N;
    N=N-K;
    if(N<0){
      N=-N;
    }
    if(tmp<=N){
      break;
    }
  }
  printf("%lld",tmp);
  return 0;
}
