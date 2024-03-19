#include <stdio.h>

void main(void){
  int N,D,n=0,i,X[200000],Y[200000];
  
  scanf("%d %d",&N,&D);
  
  for(i=0;i<N;i++){
    scanf("%d %d",&X[i],&Y[i]);
    if(X[i]*X[i]+Y[i]*Y[i]<=D*D)
      n+=1;
  }
  
  printf("%d\n",n);
}