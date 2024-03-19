#include <stdio.h>
 
int main(){
  long long int N,K,S;
  scanf("%lld %lld",&N,&K);
  if(N>=K){
    N=N%K;
  }
  
  
  
  if(N<(double)(K/2)){
    S=N;
  }else{
    S=K-N;
  }
  printf("%lld",S);
  return 0;
}
    
  
