#include <stdio.h>

void main(void){
  int n=0,i;
  
  long N,D,X[200000],Y[200000];
  
  scanf("%ld %ld",&N,&D);
  
  for(i=0;i<N;i++){
    scanf("%ld %ld",&X[i],&Y[i]);
    if(X[i]*X[i]+Y[i]*Y[i]<=D*D)
      n+=1;
  }
  
  printf("%d\n",n);
}