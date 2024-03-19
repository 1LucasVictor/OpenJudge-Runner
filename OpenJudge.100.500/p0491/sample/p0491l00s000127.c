#include <stdio.h>
 
int main(){
  long long int N,K,S;
  scanf("%lld %lld",&N,&K);
  if(N>=K){
    N=N%K;
  }
  
  
  
  if(N<(double)(K/2)+1){
    S=N;
  }else{
    S=K-N;
  }
  printf("%lld\n",S);
  return 0;
}
    
  
