#include <stdio.h>
#include <math.h>

void main(void){
  
  int N,D,X[200000],Y[200000],n=0,i;
  
  scanf("%d %d",&N,&D);
  
  for(i=0;i<N;i++){
    scanf("%d %d",&X[i],&Y[i]);
    if(sqrt(X[i]*X[i]+Y[i]*Y[i])<=D)
      n+=1;
  }
  printf("%d\n",n);
}
