#include<stdio.h>

int main(void){
  long int N, D, X[200005], Y[200005], i,count=0;
  
  scanf("%ld %ld",&N,&D);
  
  for(i=0; i<N; i++){
    scanf("%ld%ld",&X[i],&Y[i]);
    if(X[i]*X[i]+Y[i]*Y[i]<=D*D){
      count=count+1;
    }
  }
  
  printf("%ld",count);
  
}
