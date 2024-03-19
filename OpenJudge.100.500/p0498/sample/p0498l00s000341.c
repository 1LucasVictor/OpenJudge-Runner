#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>


int main(){

 long long int N;
  scanf("%lld",&N);

/*
  char A[];
  scanf("%s",A);
  */

  /*
  long long int A[N+1];
  long long int i;
  for(i=1;i<=N;i++){
   scanf("%lld",&A[i]);
   }
  */
if(N%2==0){
  printf("%lld",N/2);
}

else{
  printf("%lld",N/2+1);
}






 return(0);
 }
