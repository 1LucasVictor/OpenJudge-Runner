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

  
  long long int A[N];
  int i;
  for(i=0;i<N-1;i++){
   scanf("%lld",&A[i]);
   }

  long long int B[N];
  for(i=0;i<N;i++){
   B[i]=0;
   }
   
  for(i=0;i<N-1;i++){
   B[A[i]-1]+=1;
   }


  for(i=0;i<N;i++){
    printf("%lld\n",B[i]);
   }




 return(0);
 }
