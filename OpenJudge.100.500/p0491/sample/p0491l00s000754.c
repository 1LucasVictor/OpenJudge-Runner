#include <stdio.h>
#include <math.h>

int main(){
long long N,K,min,tmp;
  scanf("%lld %lld",&N,&K);
  min=N;
  tmp=N%K;
  if(tmp<=N){min=tmp;}
  tmp=llabs(K-tmp);
  if(tmp<=min){min=tmp;}
  printf("%lld",min);
  return 0;



}
