#include <stdio.h>
#include <stdlib.h>
int main(){
  long long int N,K,flag1=0,num;
  scanf("%lld %lld",&N,&K);
  if(N>K){
    N=N%K;
  }else{
  }
  num=abs(N-K);
  if(num<N){
    N=num;
  }else{
  }  
  printf("%lld",N);
  return 0;
}