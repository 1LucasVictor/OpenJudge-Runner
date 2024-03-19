#include <stdio.h>
#include <stdlib.h>

int main(void){
  long long int N,K;
  long long int dif;
  
  if(scanf("%lld %lld",&N,&K) != 2){
    printf("***SCANF ERROR***\n");
    exit(1);
  }
  dif=N;
  do{
    N=N%K;
  }while(N/K!=0);
  
  do{
    dif=llabs(N-K);
    if(dif<N) N=dif;
  }while(dif<=N);
  printf("%lld\n",N);
  
  return 0;
}