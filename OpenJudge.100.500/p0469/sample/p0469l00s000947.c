#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>


int main(){

 long long int N,M,K;
  scanf("%lld",&K);
  scanf("%lld %lld",&N,&M);
long long int i;

for(i=N;i<=M;i++){
  if(i%K == 0){
    printf("OK");
    return(0);
  }
}

printf("NG");


/*
  char A[];
  scanf("%s",A);
  */

  /*
  int A[N];
  int i;
  for(i=0;i<N;i++){
   scanf("%d",&A[i]);
   }
  */








 return(0);
 }
