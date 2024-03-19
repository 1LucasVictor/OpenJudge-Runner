#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(){

  int N,K;
  int N1;

  scanf("%d %d",&N,&K);
 if(K != 1 && K != 0){

 
  if(N > K){
    N = N%K;
  }
 if(N != 0){
  if(K%N == 0){
    N = 0;
  }
 }
else{}

  N1 = K - N;
  
  
  if(N >= N1){
    printf("%d",N1);
  }
  else{
    printf("%d",N);

  }
 }
else if (K == 1){
  printf("0");
}

else{
  printf("%d",N);
}

  return(0);
}



