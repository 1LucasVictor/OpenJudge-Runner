#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(){

  long long int N,K;
  long long int N1;

  scanf("%lld %lld",&N,&K);
 if(K != 1 ){

 
  if(N > K){
    N = N%K;
  }
  else{}
  N1 = K - N;
  
  if(N <= N1){
    printf("%lld",N);
  }
  else{
    printf("%lld",N1);

  }
 }
else {
  printf("0");
}


  return(0);
}



