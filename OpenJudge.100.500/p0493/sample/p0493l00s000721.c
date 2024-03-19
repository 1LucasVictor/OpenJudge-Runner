#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(){

  long long int N;

  scanf("%lld",&N);

  /*
  int A[N];
  int i;
  for(i=0;i<N;i++){
   scanf("%d",A[i]);
   }
  */
  long long int f,t;

  f = N/500;
  t = (N-f*500)/5;

  printf("%lld",f*1000+t*5);







 return(0);
 }
